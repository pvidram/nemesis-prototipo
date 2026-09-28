# CMakeList.txt : CMake project for nemesis-prototipo, include source and define
# project specific logic here.
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project(nemesis-prototipo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
	set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
	set(SUPPORT_CUSTOM_FRAME_CONTROL OFF CACHE BOOL "" FORCE)
	set(SUPPORT_BUSY_WAIT_LOOP OFF CACHE BOOL "" FORCE)

	FetchContent_Declare(
		raylib
		GIT_REPOSITORY https://github.com/raysan5/raylib.git
		git_tag 6.0
	)
	FetchContent_MakeAvailable(raylib)

# Add source to this project's executable.
add_subdirectory(src) # Anyade todos los modulos de src

add_executable(nemesis-prototipo src/main.cpp)
target_link_libraries(nemesis-prototipo PRIVATE raylib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET nemesis-prototipo PROPERTY CXX_STANDARD 20)
endif()