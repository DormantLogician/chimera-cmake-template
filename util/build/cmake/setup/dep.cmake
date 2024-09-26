if (BUILD_TESTING)
    findDependency(Boost)
    findDependency(benchmark)
endif()

message(STATUS "Fetching project dependencies...")
