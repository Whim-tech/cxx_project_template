# TODO: well, it's kinda suck, because order of add_subdirectory() matters
#       also every target should know about each other 
#    optional solution: make some global variable ${LIBRARIES} and just use that (also kinda sucks)


# --- STATIC LIBRARY ---
add_subdirectory(library)

# --- HEADER ONLY LIBRARY ---
add_subdirectory(header_only_library)

# --- MAIN EXECUTABLE ---
add_subdirectory(executable)
