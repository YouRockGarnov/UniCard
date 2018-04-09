cmake_minimum_required(VERSION 3.8)
project(UniCard)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp sources/implementations/Cards/Components/Passport.cpp sources/implementations/Cards/Components/Polis.cpp sources/implementations/Cards/Components/PayCard.cpp sources/implementations/Cards/Components/Component.cpp sources/declarations/Cards/UniCard.cpp)
add_executable(UniCard ${SOURCE_FILES})