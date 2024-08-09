
add_executable(main)
target_compile_options(main PRIVATE ${WHIM_DEFAULT_COMPILE_OPTIONS})
target_compile_features(main PRIVATE ${WHIM_DEFAULT_COMPILE_FEATURE})
target_include_directories(main PRIVATE "./")

file(GLOB_RECURSE main_src CONFIGURE_DEPENDS "*.cpp" "*.cxx" "*.cc")
target_sources(main PRIVATE ${main_src})

target_link_libraries(main PRIVATE
    static 
    header_only
)
