cmake_minimum_required(VERSION 3.24)

# Does not support CPP 20
set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_STANDARD 17)


project(first_try)


add_executable(first_try main.cpp)

add_executable(Classes "Classes/simple_bank.cpp" "Classes/simple_bank.h")

add_executable(inheritance Classes/inheritance.cpp)


add_executable(References "Refrences in Functions/Refrences in functions.cpp")

add_executable(datatypes_and_loops "datatypes and loops/foreach_loops.cpp" "datatypes and loops/Stack data type.cpp" )

add_executable(set "datatypes and loops/Sets.cpp")

add_executable(Hash_map "datatypes and loops/Hash map.cpp")

add_executable(Employee_management "Beginner Projects/Employee management/Employee mangement.cpp")

add_executable(STL STL.cpp)

