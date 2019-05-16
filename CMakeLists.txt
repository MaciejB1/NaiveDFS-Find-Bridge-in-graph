cmake_minimum_required(VERSION 3.8)
project(Alg_Pit)

set(CMAKE_CXX_STANDARD 17)

add_executable(naive_list naive_list.cpp graph_list.cpp graph_list.h)
add_executable(naive_matrix naive_matrix.cpp graph_matrix.cpp graph_matrix.h)
add_executable(dfs_matrix dfs_matrix.cpp graph_matrix.cpp graph_matrix.h)
add_executable(dfs_list dfs_list.cpp graph_list.cpp graph_list.h)