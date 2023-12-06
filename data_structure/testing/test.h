//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_TEST_H
#define DATA_STRUCTURE_TEST_H

#include "../list/array_list.h"
#include "../list/linked_list_node.h"
#include "../list/linked_list.h"
#include "../queue/queue.h"
#include "../stack/stack.h"
#include "../function_pointer/functions.h"

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
            delete arr;
        }
        static void testLinkedList(){
            auto* list=new linked_list<int>(4);
            list->addNode(3);
            list->print();
            delete list;
        }
        static void testQueue(){
            auto* q=new queue<int>(1);
            q->push(2);
            q->print();
            q->pop();
            q->print();
            delete q;
        }
        static void testStack(){
            auto* s=new stack<int>(1);
            s->push(2);
            s->push(3);
            s->pop();
            s->print();
        }
        static void testFunctionPointer(){
            int (*func)();
            func=func1;
            std::cout<<func()<<" |";
            func=func2;
            std::cout<<func()<<" |";
        }
    };
}
#endif //DATA_STRUCTURE_TEST_H
