# --- STATIC LIBRARY
add_library(static STATIC)
target_compile_options(static PRIVATE ${WHIM_DEFAULT_COMPILE_OPTIONS})
target_compile_features(static PRIVATE ${WHIM_DEFAULT_COMPILE_FEATURE})
# make public and private header folders
target_include_directories(static PUBLIC "library/")

file(GLOB_RECURSE library_src CONFIGURE_DEPENDS "library/*.cpp" "library/*.cxx" "library/*.cc")
target_sources(static PRIVATE ${library_src})

# --- HEADER ONLY LIBRARY
add_library(header_only INTERFACE)
target_include_directories(header_only INTERFACE header_only_library)

# --- MAIN EXECUTABLE
add_executable(main)
target_compile_options(main PRIVATE ${WHIM_DEFAULT_COMPILE_OPTIONS})
target_compile_features(main PRIVATE ${WHIM_DEFAULT_COMPILE_FEATURE})
target_include_directories(main PRIVATE "executable/")

file(GLOB_RECURSE main_src CONFIGURE_DEPENDS "executable/*.cpp" "executable/*.cxx" "executable/*.cc")
target_sources(main PRIVATE ${main_src})

target_link_libraries(main PRIVATE static header_only)

