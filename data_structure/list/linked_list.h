//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_LINKED_LIST_H
#define DATA_STRUCTURE_LINKED_LIST_H
#include "list.h"
#include "linked_list_node.h"
#include <iostream>
namespace ds{
    template<typename T>
    class linked_list:list<T>{
        int _size;
        linked_list_node<T>* root;
    public:
        ~linked_list(){
            while(root!= nullptr){
                linked_list_node<T>* node=root;
                root=root->getNext();
                delete node;
            }
        }
        linked_list():_size(0),root(nullptr){}
        explicit linked_list(T val):root(new linked_list_node(val)),_size(1){}
        void addNode(T value){
            auto* newNode=new linked_list_node<T>(value);
            if(root==nullptr){
                root=newNode;
            }else{
                linked_list_node<T>* node=root;
                while(node->getNext()!= nullptr){
                    node=node->getNext();
                }
                node->setNext(newNode);
            }
            _size++;
        }
        T get(int index){
            if(index<0||index>=_size){
                throw std::out_of_range("Index out of bounds");;
            }
            linked_list_node<T>* node=root;
            for(int i=0;i<index;i++){
                node=node->getNext();
            }
            return node->getValue();
        }
        int size(){
            return _size;
        }
        void print(){
            linked_list_node<T>* node=root;
            while(node!= nullptr){
                std::cout<<node->getValue()<<" ";
                node=node->getNext();
            }
            std::cout<<std::endl;
        }

        template<typename PrintFunc>
        void print(PrintFunc printFunc){
            linked_list_node<T>* node=root;
            while(node!= nullptr){
                printFunc(node->getValue());
                node=node->getNext();
            }
            std::cout<<std::endl;
        }
    };
}
#endif //DATA_STRUCTURE_LINKED_LIST_H
