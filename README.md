# Chimera

### Important notice

This project is in beta stage of development - this means that it is NOT ready for production use until this notice is removed.

### Description

A generic CMake project template that focuses on both completeness, and meeting safety and acceptance requirements.

### Features

- Conan package manager for downloading and using dependencies.
- Clang Tidy static analyzer for error checking at compile time.
- Boost Test for creating test suites.
- Google Benchmark for specifying performance requirements.
- Memory analyzers and sanitizers for detecting security defects in tests at runtime.
- Templates for app, library, subsystem, and test targets.
- Build types for profiling and test coverage.
- CMake tasks for test coverage, memory analyzer/sanitziers with tests, and binary packaging.
- GitHub actions workflow for continuous integration.

### Folders

    doc               (Contains project documentation).
    target            (Contains local targets to build related to this project)
    template          (Contains boilerplate structures that are filled in to make new targets)
    test_package      (Contains a Conan recipe that is used to test if our Conan package can be consumed by our users)
    util              (Contains scripts and/or programs that are used help build, maintain, or package the project)
    .git              (Contains git configuration and commit history)
    .github           (Contains GitHub Actions continuous integration configuration)

### Files

    CMakeLists.txt    (CMake configuration file for the root directory of project)
    conanfile.py      (Configuration file used to tell Conan which packages to get for project)
    DETAIL.md         (Describes details about the project's structure, preparation work that was done before project was started and what is currently being anticipated)
    LICENSE.txt       (Describes permissions granted to others so they can use your software)
    README.md         (Contains info on what project is, and how to build project)
    SECURITY.md       (Describes how to report security vulnerabilities properly)
    COMPONENTS.md     (Defines types of code objects that may be created in project)
    .clang-tidy       (Configuration for Clang Tidy static analyzer)
    .editorconfig     (Configuration file recognized by certain editors which defines project-wide settings)
    .gitattributes    (Configuration file used by Git to apply modifications to certain files)
    .gitignore        (Configuration file used by Git to avoid committing certain files and/or folders)
