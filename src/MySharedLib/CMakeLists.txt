project(MySharedLib)

message (STATUS "Inside of " ${PROJECT_NAME})
message (STATUS "CMAKE_BINARY_DIR is " ${CMAKE_BINARY_DIR})
message (STATUS "CMAKE_CURRENT_BINARY_DIR is " ${CMAKE_CURRENT_BINARY_DIR})


add_library(${PROJECT_NAME} SHARED 
./include/public/MySharedLib/Animal.h
./src/Animal.cpp
./include/public/MySharedLib/Bird.h
./src/Bird.cpp
./include/public/MySharedLib/Tiger.h
./src/Tiger.cpp)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
./include/public/MySharedLib
PRIVATE 
./include/private/MySharedLib
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)