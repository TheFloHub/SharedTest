project(MyExe)

message (STATUS "Inside of " ${PROJECT_NAME})
message (STATUS "CMAKE_BINARY_DIR is " ${CMAKE_BINARY_DIR})
message (STATUS "CMAKE_CURRENT_BINARY_DIR is " ${CMAKE_CURRENT_BINARY_DIR})

add_executable(${PROJECT_NAME} 
src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ./src)

target_link_libraries(${PROJECT_NAME} PUBLIC MySharedLib)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)
endif(MSVC)