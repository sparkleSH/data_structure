//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_LINKED_LIST_NODE_H
#define DATA_STRUCTURE_LINKED_LIST_NODE_H
namespace ds{
    template<typename T>
    class linked_list_node{
        T value;
        linked_list_node<T>* next;
    public:
        explicit linked_list_node(T val):value(val){
            next= nullptr;
        }
        void setNext(linked_list_node<T>* nextNode){
            this->next=nextNode;
        }
        linked_list_node<T>* getNext(){
            return this->next;
        }
        T getValue(){
            return value;
        }
    };
}
#endif //DATA_STRUCTURE_LINKED_LIST_NODE_H
