include(GNUInstallDirs) # Define common file installation paths.

set(CPACK_COMPONENTS_ALL app)
set(CPACK_DEB_COMPONENT_INSTALL ON)

set(CPACK_PACKAGE_CONTACT "Full Name <Email>")
set(CPACK_STRIP_FILES YES) # Strip debug symbols from binary files.
set(CPACK_INSTALL_DEFAULT_DIRECTORY_PERMISSIONS # Make sure directory permissions are set properly.
    OWNER_READ OWNER_WRITE OWNER_EXECUTE
    GROUP_READ GROUP_EXECUTE
    WORLD_READ WORLD_EXECUTE
)

set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES /built;/build;/test_package/build;/build;/.git;/.vscode;/CMakeUserPresets.json)

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_FILE_NAME DEB-DEFAULT) # Use Debian naming conventions for binary files.
set(CPACK_DEBIAN_PACKAGE_SECTION utils)
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS YES) # Make better dependency list in deb file.
