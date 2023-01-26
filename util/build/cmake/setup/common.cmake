# Add some default compiler and linker flags to 'TARGET' based on chosen compiler and CMake configuration.
# Use this function on any new app and library targets internal to project.
function(setupFlags TARGET)
    if (PROJECT_IS_ROOT)
        set(CLANG_TEST_FLAGS $<$<CONFIG:Test>:-fsanitize=undefined,address,leak -fno-omit-frame-pointer>)
        set(MSVC_TEST_FLAGS $<$<CONFIG:Test>:/fsanitize=address /Oy->)

        set(CLANG_PROFILE_FLAGS $<$<CONFIG:Profile>:-pg>)
        set(MSVC_PROFILE_FLAGS $<$<CONFIG:Profile>:/GENPROFILE>)

        if (${CMAKE_CXX_COMPILER_ID} MATCHES "Clang|GNU")
            target_compile_options(${TARGET} PRIVATE
                -fno-strict-overflow
                -fno-strict-aliasing
                -fno-delete-null-pointer-checks
                -Wuninitialized
                -Winit-self
                ${CLANG_TEST_FLAGS}
                ${CLANG_PROFILE_FLAGS}
            )
            
            target_link_options(${TARGET} PRIVATE
                ${CLANG_TEST_FLAGS}
                ${CLANG_PROFILE_FLAGS}
            )
        endif()
        if (${CMAKE_CXX_COMPILER_ID} MATCHES "MSVC")
            target_compile_options(${TARGET} PRIVATE
                /guard:cf 
                /GS
                ${MSVC_TEST_FLAGS}
                ${MSVC_PROFILE_FLAGS}
            )
            
            target_link_options(${TARGET} PRIVATE
                ${MSVC_TEST_FLAGS}
                ${MSVC_PROFILE_FLAGS}
            )
        endif()
    endif()
endfunction()

# Adds the specified directory to the build if 'BUILD_TESTING' is enabled.
function(addTestDir TEST_DIR)
    if (BUILD_TESTING)
        add_subdirectory(${TEST_DIR})
    endif()
endfunction()

# Set up a new test with a name and associated source file.
function(makeTest TEST_NAME TEST_SOURCE)
    if (BUILD_TESTING)
        add_executable(${TEST_NAME} ${TEST_SOURCE})

        target_link_libraries(${TEST_NAME} PRIVATE Boost::unit_test_framework)
        setupFlags(${TEST_NAME})

        add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
    endif()
endfunction()

# Uses 'find_package' to find a dependency with the given name, then adds it's include files to project.
function(findDependency TARG_NAME)
    find_package(${TARG_NAME})
    if (${TARG_NAME}_FOUND)
        include_directories(${${TARG_NAME}_INCLUDE_DIRS})
    endif()
endfunction()