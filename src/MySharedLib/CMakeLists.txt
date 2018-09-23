project(MySharedLib)

message (STATUS "Inside of " ${PROJECT_NAME})
message (STATUS "CMAKE_BINARY_DIR is " ${CMAKE_BINARY_DIR})
message (STATUS "CMAKE_CURRENT_BINARY_DIR is " ${CMAKE_CURRENT_BINARY_DIR})


add_library(${PROJECT_NAME} SHARED 
./include/public/MySharedLib/MySharedLib.h
./include/public/MySharedLib/System.h
./src/System.cpp
./include/public/MySharedLib/Component.h
./src/Component.cpp
./include/public/MySharedLib/ComponentA.h
./src/ComponentA.cpp)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
./include/public/
PRIVATE 
./include/private/
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

target_compile_definitions(${PROJECT_NAME} PRIVATE EXPORTING_MY_SHARED_LIB_DLL_SYMS)
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)
endif(MSVC)