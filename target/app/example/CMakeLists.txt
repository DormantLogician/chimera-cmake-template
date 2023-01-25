set(BINARY_NAME example)

add_executable(${BINARY_NAME}
    main.cpp
)

target_link_libraries(${BINARY_NAME} PRIVATE math)

setupFlags(${BINARY_NAME})
