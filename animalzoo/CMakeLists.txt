# 指定CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(ZooProject)

# 设置C++标准为C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#这个是为了代码的自动补全用的
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# 添加头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)
# 当然也可以使用target_include_directories为特定目标添加包含目录
#target_include_directories(MainApp PUBLIC 
#    ${PROJECT_SOURCE_DIR}/include
#)
# 是如果你想生成自己编译的库，可以这样创建
add_library(ZooLib src/zoo.cpp)

# 添加可执行文件（也可以理解成为添加所有的cpp文件）
add_executable(ZooApp src/main.cpp)
#也可以用变量法
# set(SOURCES
#     src/main.cpp
#     src/file1.cpp
#     src/file2.cpp
#     src/file3.cpp
# )
# add_executable(MainApp ${SOURCES})

# 链接库到可执行文件
target_link_libraries(ZooApp ZooLib)

