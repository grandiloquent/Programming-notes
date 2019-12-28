# CMake

## Books

### CMake Cookbook

- Setting up Your System

  - Obtaining the code
  - Docker image
  - Installing prerequisite software
  - Testing the recipes
  - Reporting problems and suggesting improvements

- From a Simple Executable to Libraries

  - Introduction
  - Compiling a single source file into an executable
  - Switching generators
  - Building and linking static and shared libraries
  - Controlling compilation with conditionals
  - Presenting options to the user
  - Specifying the compiler
  - Switching the build type
  - Controlling compiler flags
  - Setting the standard for the language
  - Using control flow constructs

- Detecting the Environment

  - Introduction
  - Discovering the operating system
  - Dealing with platform-dependent source code
  - Dealing with compiler-dependent source code
  - Discovering the host processor architecture
  - Discovering the host processor instruction set
  - Enabling vectorization for the Eigen library

- Detecting External Libraries and Programs

  - Introduction
  - Detecting the Python interpreter
  - Detecting the Python library
  - Detecting Python modules and packages
  - Detecting the BLAS and LAPACK math libraries
  - Detecting the OpenMP parallel environment
  - Detecting the MPI parallel environment
  - Detecting the Eigen library
  - Detecting the Boost libraries
  - Detecting external libraries: I. Using pkg-config
  - Detecting external libraries: II. Writing a find-module

- Creating and Running Tests

  - Introduction
  - Creating a simple unit test
  - Defining a unit test using the Catch2 library
  - Defining a unit test and linking against Google Test
  - Defining a unit test and linking against Boost test
  - Using dynamic analysis to detect memory defects
  - Testing expected failures
  - Using timeouts for long tests
  - Running tests in parallel
  - Running a subset of tests
  - Using test fixtures

- Configure-time and Build-time Operations

  - Introduction
  - Using platform-independent file operations
  - Running a custom command at configure time
  - Running a custom command at build time: I. Using add_custom_command
  - Running a custom command at build time: II. Using add_custom_target
  - Running custom commands for specific targets at build time
  - Probing compilation and linking
  - Probing compiler flags
  - Probing execution
  - Fine-tuning configuration and compilation with generator expressions

- Generating Source Code

  - Introduction
  - Generating sources at configure time
  - Generating source code at configure time using Python
  - Generating source code at build time using Python
  - Recording the project version information for reproducibility
  - Recording the project version from a file
  - Recording the Git hash at configure time
  - Recording the Git hash at build time

- Structuring Projects

  - Introduction
  - Code reuse with functions and macros
  - Splitting CMake sources into modules
  - Writing a function to test and set compiler flags
  - Defining a function or macro with named arguments
  - Redefining functions and macros
  - Deprecating functions, macros, and variables
  - Limiting scope with add_subdirectory
  - Avoiding global variables using target_sources
  - Organizing Fortran projects

- The Superbuild Pattern

  - Introduction
  - Using the superbuild pattern
  - Managing dependencies with a superbuild: I. The Boost libraries
  - Managing dependencies with a superbuild: II. The FFTW library
  - Managing dependencies with a superbuild: III. The Google Test framework
  - Managing your project as a superbuild

- Mixed-language Projects

  - Introduction
  - Building Fortran projects that use C/C++ libraries
  - Building C/C++ projects that use Fortran libraries
  - Building C++ and Python projects using Cython
  - Building C++ and Python projects using Boost.Python
  - Building C++ and Python projects using pybind11
  - Mixing C, C++, Fortran, and Python using Python CFFI

- Writing an Installer

  - Introduction
  - Installing your project
  - Generating export headers
  - Exporting your targets
  - Installing a superbuild

- Packaging Projects

  - Introduction
  - Generating source and binary packages
  - Distributing a C++/Python project built with CMake/pybind11 via PyPI
  - Distributing a C/Fortran/Python project build with CMake/CFFI via PyPI
  - Distributing a simple project as Conda package
  - Distributing a project with dependencies as Conda package

- Building Documentation

  - Introduction
  - Building documentation using Doxygen
  - Building documentation using Sphinx
  - Combining Doxygen and Sphinx

- Alternative Generators and Cross-compilation

  - Introduction
  - Building a CMake project using&#xA0;Visual Studio 2017
  - Cross-compiling a hello world example
  - Cross-compiling a Windows binary with OpenMP parallelization

- Testing Dashboards

  - Introduction
  - Deploying tests to the CDash dashboard
  - Reporting test coverage to the CDash dashboard
  - Using the AddressSanitizer and reporting memory defects to CDash
  - Using the ThreadSanitizer and reporting data races to CDash

- Porting a Project to CMake

  - Where to start
  - Generating files and writing platform checks
  - Detecting required dependencies and linking
  - Reproducing compiler flags
  - Porting tests
  - Porting install targets
  - Further steps
  - Summary and common pitfalls when converting projects to CMake

