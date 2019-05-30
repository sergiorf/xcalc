cmake_minimum_required(VERSION 3.2)
project(xcalc)

add_subdirectory(division)
set(SOURCE_FILES parser.cpp main.cpp token_stream.cpp)

add_executable(xcalc ${SOURCE_FILES})
target_link_libraries(xcalc division)
install(TARGETS xcalc DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
