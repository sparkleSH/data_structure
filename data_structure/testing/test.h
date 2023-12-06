//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_TEST_H
#define DATA_STRUCTURE_TEST_H

#include "../list/array_list.h"
#include "../list/linked_list_node.h"
#include "../list/linked_list.h"

namespace ds{
    class test{
    public:
        static void testArray(){
            auto* arr=new array_list<int>(4);
            arr->assign(0,1);
            arr->assign(1,2);
            arr->assign(2,3);
            arr->assign(3,4);
            arr->print([](int val){
                std::cout<<val<<" ";
            });
        }
        static void testLinkedList(){
            auto* list=new linked_list<int>(4);
            list->addNode(3);
            list->print();
        }
    };
}
#endif //DATA_STRUCTURE_TEST_H
