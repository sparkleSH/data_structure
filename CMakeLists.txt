cmake_minimum_required(VERSION 3.26)
project(data_structure)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        data_structure/list/array_list.h
        data_structure/ds.h
        data_structure/list/list.h
        data_structure/list/linked_list.h
        data_structure/list/linked_list_node.h
        data_structure/testing/test.h
        data_structure/queue/queue.h
        data_structure/stack/stack.h)
