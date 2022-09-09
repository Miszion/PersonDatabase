cmake_minimum_required(VERSION 3.1)
project(PersonDatabase)

# We include source directories that contain they're own CMakeLists.txt that take the project configuration further.
add_subdirectory(src)
add_subdirectory(include)
