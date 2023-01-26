# Chimera
### Description
A CMake project template that uses Conan, Clang Tidy, and Boost Test.

### Features
- Templates for app, library, and subsystem targets.
- Testing (sanitizer) and profiling build types.
- In-source builds are disabled.

### Folders
- target - Contains local targets to build related to this project.
- template - Contains boilerplate structures that are filled in to make new targets.
- util - Contains scripts and/or programs that are used help build, maintain, or package the project.
- .git - Contains git configuration and commit history.

### Files
- BREIF.md - Contains info on what project is, and how to build project.
- CMakeLists.txt - CMake configuration file for the root directory of project.
- CMakePresets.json - CMake configuration file that sets compiler and genererator depending on configuration.
- conanfile.py - Configuration file used to tell Conan which packages to get for project.
- DETAIL.md - Describes details about the project's structure.
- OUTLINE.md - Describes preparation work that was done before project was started and what is currently being anticipated.
- .clang-format - Configuration for Clang Format code formatter.
- .clang-tidy - Configuration for Clang Tidy static analyzer.
- .editorconfig - Configuration file recognized by certain editors which defines project-wide settings.
- .gitattributes - Configuration file used by Git to apply modifications to certain files.
- .gitignore - Configuration file used by Git to avoid committing certain files and/or folders.