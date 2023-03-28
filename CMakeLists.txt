CMAKE_MINIMUM_REQUIRED(VERSION 3.22)

# Declare the project, specify project name, prefer to specify three numbers: Major.Minor.Patch
PROJECT(
	minimum-example
	VERSION 0.0.1
	DESCRIPTION "Minimum example CMake project using c++20"
	LANGUAGES C CXX)

# Name variables for easier reuse.
SET(LIBRARY_NAME ${CMAKE_PROJECT_NAME})
SET(NAMESPACE_NAME "Template")
SET(FULL_LIBRARY_NAME "${NAMESPACE_NAME}::${LIBRARY_NAME}")

# Set used C/C++ standards.
SET(CMAKE_CXX_STANDARD 20)

# Project dependencies
FIND_PACKAGE(Boost 1.76 REQUIRED COMPONENTS regex)
FIND_PACKAGE(OpenCV 4.2 REQUIRED)

# Add a target
ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main PRIVATE Boost::regex ${OpenCV_LIBS})