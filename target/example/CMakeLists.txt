set(BINARY_NAME example)

add_executable(${BINARY_NAME}
    main.cpp
)

install(TARGETS ${BINARY_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
target_link_libraries(${BINARY_NAME} PRIVATE math)
