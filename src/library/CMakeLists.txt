
add_library(static STATIC)
target_compile_options(static PRIVATE ${WHIM_DEFAULT_COMPILE_OPTIONS})
target_compile_features(static PRIVATE ${WHIM_DEFAULT_COMPILE_FEATURE})

target_include_directories(static PUBLIC "./public")
target_include_directories(static PRIVATE "./private")

file(GLOB_RECURSE library_src CONFIGURE_DEPENDS "./*.cpp" "./*.cxx" "./*.cc")
target_sources(static PRIVATE ${library_src})
