//
// Created by 39511 on 2023/12/7.
//

#ifndef DATA_STRUCTURE_TREE_NODE_H
#define DATA_STRUCTURE_TREE_NODE_H
#include <iostream>
namespace ds{
    template<typename T>
    class tree_node{
        T value;
        tree_node<T>* left;
        tree_node<T>* right;
    public:
        explicit tree_node(int val):value(val),left(nullptr),right(nullptr){}
        tree_node()= default;
        T getValue(){return value;}
        void setValue(T val){
            this->val=val;
        };
        tree_node* getLeft(){
            return left;
        }
        void setLeft(tree_node* node){
            this->left=node;
        }
        tree_node* getRight(){
            return right;
        }
        void setRight(tree_node* node){
            this->right=node;
        }
    };
}
#endif //DATA_STRUCTURE_TREE_NODE_H
