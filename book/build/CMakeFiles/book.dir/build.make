# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dawid/PO2020/book

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/PO2020/book/build

# Include any dependencies generated for this target.
include CMakeFiles/book.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/book.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/book.dir/flags.make

CMakeFiles/book.dir/Main.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/book.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/Main.cpp.o -c /home/dawid/PO2020/book/Main.cpp

CMakeFiles/book.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/Main.cpp > CMakeFiles/book.dir/Main.cpp.i

CMakeFiles/book.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/Main.cpp -o CMakeFiles/book.dir/Main.cpp.s

CMakeFiles/book.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/Main.cpp.o.requires

CMakeFiles/book.dir/Main.cpp.o.provides: CMakeFiles/book.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/Main.cpp.o.provides

CMakeFiles/book.dir/Main.cpp.o.provides.build: CMakeFiles/book.dir/Main.cpp.o


CMakeFiles/book.dir/src/A4Page.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/src/A4Page.cpp.o: ../src/A4Page.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/book.dir/src/A4Page.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/src/A4Page.cpp.o -c /home/dawid/PO2020/book/src/A4Page.cpp

CMakeFiles/book.dir/src/A4Page.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/src/A4Page.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/src/A4Page.cpp > CMakeFiles/book.dir/src/A4Page.cpp.i

CMakeFiles/book.dir/src/A4Page.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/src/A4Page.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/src/A4Page.cpp -o CMakeFiles/book.dir/src/A4Page.cpp.s

CMakeFiles/book.dir/src/A4Page.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/src/A4Page.cpp.o.requires

CMakeFiles/book.dir/src/A4Page.cpp.o.provides: CMakeFiles/book.dir/src/A4Page.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/src/A4Page.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/src/A4Page.cpp.o.provides

CMakeFiles/book.dir/src/A4Page.cpp.o.provides.build: CMakeFiles/book.dir/src/A4Page.cpp.o


CMakeFiles/book.dir/src/B5Page.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/src/B5Page.cpp.o: ../src/B5Page.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/book.dir/src/B5Page.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/src/B5Page.cpp.o -c /home/dawid/PO2020/book/src/B5Page.cpp

CMakeFiles/book.dir/src/B5Page.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/src/B5Page.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/src/B5Page.cpp > CMakeFiles/book.dir/src/B5Page.cpp.i

CMakeFiles/book.dir/src/B5Page.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/src/B5Page.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/src/B5Page.cpp -o CMakeFiles/book.dir/src/B5Page.cpp.s

CMakeFiles/book.dir/src/B5Page.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/src/B5Page.cpp.o.requires

CMakeFiles/book.dir/src/B5Page.cpp.o.provides: CMakeFiles/book.dir/src/B5Page.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/src/B5Page.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/src/B5Page.cpp.o.provides

CMakeFiles/book.dir/src/B5Page.cpp.o.provides.build: CMakeFiles/book.dir/src/B5Page.cpp.o


CMakeFiles/book.dir/src/Book.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/src/Book.cpp.o: ../src/Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/book.dir/src/Book.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/src/Book.cpp.o -c /home/dawid/PO2020/book/src/Book.cpp

CMakeFiles/book.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/src/Book.cpp > CMakeFiles/book.dir/src/Book.cpp.i

CMakeFiles/book.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/src/Book.cpp -o CMakeFiles/book.dir/src/Book.cpp.s

CMakeFiles/book.dir/src/Book.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/src/Book.cpp.o.requires

CMakeFiles/book.dir/src/Book.cpp.o.provides: CMakeFiles/book.dir/src/Book.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/src/Book.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/src/Book.cpp.o.provides

CMakeFiles/book.dir/src/Book.cpp.o.provides.build: CMakeFiles/book.dir/src/Book.cpp.o


CMakeFiles/book.dir/src/Page.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/src/Page.cpp.o: ../src/Page.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/book.dir/src/Page.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/src/Page.cpp.o -c /home/dawid/PO2020/book/src/Page.cpp

CMakeFiles/book.dir/src/Page.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/src/Page.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/src/Page.cpp > CMakeFiles/book.dir/src/Page.cpp.i

CMakeFiles/book.dir/src/Page.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/src/Page.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/src/Page.cpp -o CMakeFiles/book.dir/src/Page.cpp.s

CMakeFiles/book.dir/src/Page.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/src/Page.cpp.o.requires

CMakeFiles/book.dir/src/Page.cpp.o.provides: CMakeFiles/book.dir/src/Page.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/src/Page.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/src/Page.cpp.o.provides

CMakeFiles/book.dir/src/Page.cpp.o.provides.build: CMakeFiles/book.dir/src/Page.cpp.o


CMakeFiles/book.dir/src/TitlePage.cpp.o: CMakeFiles/book.dir/flags.make
CMakeFiles/book.dir/src/TitlePage.cpp.o: ../src/TitlePage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/book.dir/src/TitlePage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book.dir/src/TitlePage.cpp.o -c /home/dawid/PO2020/book/src/TitlePage.cpp

CMakeFiles/book.dir/src/TitlePage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book.dir/src/TitlePage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PO2020/book/src/TitlePage.cpp > CMakeFiles/book.dir/src/TitlePage.cpp.i

CMakeFiles/book.dir/src/TitlePage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book.dir/src/TitlePage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PO2020/book/src/TitlePage.cpp -o CMakeFiles/book.dir/src/TitlePage.cpp.s

CMakeFiles/book.dir/src/TitlePage.cpp.o.requires:

.PHONY : CMakeFiles/book.dir/src/TitlePage.cpp.o.requires

CMakeFiles/book.dir/src/TitlePage.cpp.o.provides: CMakeFiles/book.dir/src/TitlePage.cpp.o.requires
	$(MAKE) -f CMakeFiles/book.dir/build.make CMakeFiles/book.dir/src/TitlePage.cpp.o.provides.build
.PHONY : CMakeFiles/book.dir/src/TitlePage.cpp.o.provides

CMakeFiles/book.dir/src/TitlePage.cpp.o.provides.build: CMakeFiles/book.dir/src/TitlePage.cpp.o


# Object files for target book
book_OBJECTS = \
"CMakeFiles/book.dir/Main.cpp.o" \
"CMakeFiles/book.dir/src/A4Page.cpp.o" \
"CMakeFiles/book.dir/src/B5Page.cpp.o" \
"CMakeFiles/book.dir/src/Book.cpp.o" \
"CMakeFiles/book.dir/src/Page.cpp.o" \
"CMakeFiles/book.dir/src/TitlePage.cpp.o"

# External object files for target book
book_EXTERNAL_OBJECTS =

book: CMakeFiles/book.dir/Main.cpp.o
book: CMakeFiles/book.dir/src/A4Page.cpp.o
book: CMakeFiles/book.dir/src/B5Page.cpp.o
book: CMakeFiles/book.dir/src/Book.cpp.o
book: CMakeFiles/book.dir/src/Page.cpp.o
book: CMakeFiles/book.dir/src/TitlePage.cpp.o
book: CMakeFiles/book.dir/build.make
book: CMakeFiles/book.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dawid/PO2020/book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable book"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/book.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/book.dir/build: book

.PHONY : CMakeFiles/book.dir/build

CMakeFiles/book.dir/requires: CMakeFiles/book.dir/Main.cpp.o.requires
CMakeFiles/book.dir/requires: CMakeFiles/book.dir/src/A4Page.cpp.o.requires
CMakeFiles/book.dir/requires: CMakeFiles/book.dir/src/B5Page.cpp.o.requires
CMakeFiles/book.dir/requires: CMakeFiles/book.dir/src/Book.cpp.o.requires
CMakeFiles/book.dir/requires: CMakeFiles/book.dir/src/Page.cpp.o.requires
CMakeFiles/book.dir/requires: CMakeFiles/book.dir/src/TitlePage.cpp.o.requires

.PHONY : CMakeFiles/book.dir/requires

CMakeFiles/book.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/book.dir/cmake_clean.cmake
.PHONY : CMakeFiles/book.dir/clean

CMakeFiles/book.dir/depend:
	cd /home/dawid/PO2020/book/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dawid/PO2020/book /home/dawid/PO2020/book /home/dawid/PO2020/book/build /home/dawid/PO2020/book/build /home/dawid/PO2020/book/build/CMakeFiles/book.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/book.dir/depend

