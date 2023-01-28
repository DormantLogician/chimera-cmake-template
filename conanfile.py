# SPDX-License-Identifier: MIT

from conans import ConanFile

class ConfigConan(ConanFile):
    name = "example"
    version = "0.0.1"
    license = "MIT"
    description = """Put description of project here if publishing."""
    settings = "os", "compiler", "build_type", "arch"
    tool_requires = "boost/1.81.0"
    generators = "cmake_find_package"
