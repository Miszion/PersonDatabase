# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cosmic/coding/github_projects/PersonDatabase

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cosmic/coding/github_projects/PersonDatabase/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/Course.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Course.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/Course.cpp
CMakeFiles/main.dir/Course.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/Course.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Course.cpp.o -MF CMakeFiles/main.dir/Course.cpp.o.d -o CMakeFiles/main.dir/Course.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/Course.cpp

CMakeFiles/main.dir/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Course.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/Course.cpp > CMakeFiles/main.dir/Course.cpp.i

CMakeFiles/main.dir/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Course.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/Course.cpp -o CMakeFiles/main.dir/Course.cpp.s

CMakeFiles/main.dir/Employee.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Employee.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/Employee.cpp
CMakeFiles/main.dir/Employee.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/Employee.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Employee.cpp.o -MF CMakeFiles/main.dir/Employee.cpp.o.d -o CMakeFiles/main.dir/Employee.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/Employee.cpp

CMakeFiles/main.dir/Employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Employee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/Employee.cpp > CMakeFiles/main.dir/Employee.cpp.i

CMakeFiles/main.dir/Employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Employee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/Employee.cpp -o CMakeFiles/main.dir/Employee.cpp.s

CMakeFiles/main.dir/Person.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Person.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/Person.cpp
CMakeFiles/main.dir/Person.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/Person.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Person.cpp.o -MF CMakeFiles/main.dir/Person.cpp.o.d -o CMakeFiles/main.dir/Person.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/Person.cpp

CMakeFiles/main.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Person.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/Person.cpp > CMakeFiles/main.dir/Person.cpp.i

CMakeFiles/main.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Person.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/Person.cpp -o CMakeFiles/main.dir/Person.cpp.s

CMakeFiles/main.dir/Student.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Student.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/Student.cpp
CMakeFiles/main.dir/Student.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/Student.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Student.cpp.o -MF CMakeFiles/main.dir/Student.cpp.o.d -o CMakeFiles/main.dir/Student.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/Student.cpp

CMakeFiles/main.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/Student.cpp > CMakeFiles/main.dir/Student.cpp.i

CMakeFiles/main.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/Student.cpp -o CMakeFiles/main.dir/Student.cpp.s

CMakeFiles/main.dir/Teacher.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Teacher.cpp.o: /home/cosmic/coding/github_projects/PersonDatabase/Teacher.cpp
CMakeFiles/main.dir/Teacher.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/Teacher.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Teacher.cpp.o -MF CMakeFiles/main.dir/Teacher.cpp.o.d -o CMakeFiles/main.dir/Teacher.cpp.o -c /home/cosmic/coding/github_projects/PersonDatabase/Teacher.cpp

CMakeFiles/main.dir/Teacher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Teacher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cosmic/coding/github_projects/PersonDatabase/Teacher.cpp > CMakeFiles/main.dir/Teacher.cpp.i

CMakeFiles/main.dir/Teacher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Teacher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cosmic/coding/github_projects/PersonDatabase/Teacher.cpp -o CMakeFiles/main.dir/Teacher.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/Course.cpp.o" \
"CMakeFiles/main.dir/Employee.cpp.o" \
"CMakeFiles/main.dir/Person.cpp.o" \
"CMakeFiles/main.dir/Student.cpp.o" \
"CMakeFiles/main.dir/Teacher.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/Course.cpp.o
main: CMakeFiles/main.dir/Employee.cpp.o
main: CMakeFiles/main.dir/Person.cpp.o
main: CMakeFiles/main.dir/Student.cpp.o
main: CMakeFiles/main.dir/Teacher.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/cosmic/coding/github_projects/PersonDatabase/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cosmic/coding/github_projects/PersonDatabase /home/cosmic/coding/github_projects/PersonDatabase /home/cosmic/coding/github_projects/PersonDatabase/build /home/cosmic/coding/github_projects/PersonDatabase/build /home/cosmic/coding/github_projects/PersonDatabase/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

