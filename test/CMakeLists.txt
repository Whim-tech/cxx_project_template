# TODO: add tests

# downloading gtest
include(FetchContent)
FetchContent_Declare(
  googletest
  # TODO: remove this magic link, add git link + git tag to specific version
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# --- TEST EXECUTABLE (run ALL unit tests)
add_executable(
  run_tests
)

file(GLOB_RECURSE test_src CONFIGURE_DEPENDS "*.cpp" "*.cxx" "*.cc")
target_sources(run_tests PRIVATE ${test_src})

target_compile_options(run_tests PRIVATE ${WHIM_DEFAULT_COMPILE_OPTIONS})
target_compile_features(run_tests PRIVATE ${WHIM_DEFAULT_COMPILE_FEATURE})
target_include_directories(run_tests PRIVATE "./")

target_link_libraries(
  run_tests
  GTest::gtest_main
  # your library dependencies
)

include(GoogleTest)
gtest_discover_tests(run_tests)
