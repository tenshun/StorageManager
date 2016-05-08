cmake_minimum_required(VERSION 3.3)
project(course_work_algo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_INCLUDE_CURRENT_DIR ON)


# Use the compile definitions defined in the Qt 5 Widgets module
#add_definitions(${Qt5Widgets_DEFINITIONS})

set (CMAKE_PREFIX_PATH "C:\\Program Files\\Qt\\5.5\\mingw492_32")
find_package(Qt5Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
# Add compiler flags for building executables (-fPIE)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

#set(SOURCE_FILES main.cpp xml_module/src/XMLService.cpp xml_module/include/XMLService.h sources/controller/Controller.cpp headers/Controller.h view/View.cpp headers/View.h structure_module/src/Storage.cpp structure_module/include/Storage.h structure_module/src/StorageDAO.cpp structure_module/include/StorageDAO.h structure_module/src/Section.cpp structure_module/include/Section.h structure_module/src/SectionDAO.cpp structure_module/include/SectionDAO.h xml_module/src/InMemoryDataService.cpp xml_module/include/InMemoryDataService.h)
#add_executable(course_work_algo ${SOURCE_FILES})
add_subdirectory (structure_module)
add_subdirectory (xml_module)


add_executable(course_work_algo main.cpp)
target_link_libraries(course_work_algo Qt5::Widgets)
