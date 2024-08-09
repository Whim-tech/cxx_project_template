cmake_minimum_required(VERSION 3.24)

project(cmake_template CXX)

# used for generating compile_comands.json (used in clangd)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(WHIM_BUILD_TEST "Build tests" ON)

if(MSVC)
    set(WHIM_DEFAULT_COMPILE_OPTIONS /W4)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(WHIM_DEFAULT_COMPILE_OPTIONS -Wall -Wextra -Wpedantic -glldb)
else() # GCC
    set(WHIM_DEFAULT_COMPILE_OPTIONS -Wall -Wextra -Wpedantic)
endif()

set(WHIM_DEFAULT_COMPILE_FEATURE "cxx_std_23")
set(WHIM_EXTERNAL_DEPS_PATH "${PROJECT_SOURCE_DIR}/external")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src)

if(${WHIM_BUILD_TEST})
    include(CTest)
    # for some reason this should be run from root file
    enable_testing()
    add_subdirectory(test)
endif()
