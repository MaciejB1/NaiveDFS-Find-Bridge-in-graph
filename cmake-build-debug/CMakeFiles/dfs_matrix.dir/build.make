# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Maciek\Desktop\Alg_Pit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dfs_matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dfs_matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dfs_matrix.dir/flags.make

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj: CMakeFiles/dfs_matrix.dir/flags.make
CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj: ../dfs_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dfs_matrix.dir\dfs_matrix.cpp.obj -c C:\Users\Maciek\Desktop\Alg_Pit\dfs_matrix.cpp

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Maciek\Desktop\Alg_Pit\dfs_matrix.cpp > CMakeFiles\dfs_matrix.dir\dfs_matrix.cpp.i

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Maciek\Desktop\Alg_Pit\dfs_matrix.cpp -o CMakeFiles\dfs_matrix.dir\dfs_matrix.cpp.s

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.requires:

.PHONY : CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.requires

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.provides: CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.requires
	$(MAKE) -f CMakeFiles\dfs_matrix.dir\build.make CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.provides.build
.PHONY : CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.provides

CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.provides.build: CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj


CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj: CMakeFiles/dfs_matrix.dir/flags.make
CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj: ../graph_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dfs_matrix.dir\graph_matrix.cpp.obj -c C:\Users\Maciek\Desktop\Alg_Pit\graph_matrix.cpp

CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Maciek\Desktop\Alg_Pit\graph_matrix.cpp > CMakeFiles\dfs_matrix.dir\graph_matrix.cpp.i

CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Maciek\Desktop\Alg_Pit\graph_matrix.cpp -o CMakeFiles\dfs_matrix.dir\graph_matrix.cpp.s

CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.requires:

.PHONY : CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.requires

CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.provides: CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.requires
	$(MAKE) -f CMakeFiles\dfs_matrix.dir\build.make CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.provides.build
.PHONY : CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.provides

CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.provides.build: CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj


# Object files for target dfs_matrix
dfs_matrix_OBJECTS = \
"CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj" \
"CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj"

# External object files for target dfs_matrix
dfs_matrix_EXTERNAL_OBJECTS =

dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj
dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj
dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/build.make
dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/linklibs.rsp
dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/objects1.rsp
dfs_matrix.exe: CMakeFiles/dfs_matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable dfs_matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dfs_matrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dfs_matrix.dir/build: dfs_matrix.exe

.PHONY : CMakeFiles/dfs_matrix.dir/build

CMakeFiles/dfs_matrix.dir/requires: CMakeFiles/dfs_matrix.dir/dfs_matrix.cpp.obj.requires
CMakeFiles/dfs_matrix.dir/requires: CMakeFiles/dfs_matrix.dir/graph_matrix.cpp.obj.requires

.PHONY : CMakeFiles/dfs_matrix.dir/requires

CMakeFiles/dfs_matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dfs_matrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dfs_matrix.dir/clean

CMakeFiles/dfs_matrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Maciek\Desktop\Alg_Pit C:\Users\Maciek\Desktop\Alg_Pit C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug C:\Users\Maciek\Desktop\Alg_Pit\cmake-build-debug\CMakeFiles\dfs_matrix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dfs_matrix.dir/depend

