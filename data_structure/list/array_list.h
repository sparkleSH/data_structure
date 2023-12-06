//
// Created by 39511 on 2023/12/4.
//

#ifndef DATA_STRUCTURE_ARRAY_LIST_H
#define DATA_STRUCTURE_ARRAY_LIST_H
#include<iostream>
#include "list.h"

namespace ds {
    template<typename T>
    class array_list:list<T>{
        int _size;
        T* arr;
    public:
        T get(int index) {
            return arr[index];
        }

        int size() {
            return this->_size;
        }

        void assign(int index, T value) {
            arr[index] = value;
        }
        void print(){
            for(int i=0;i<_size;i++){
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
        }

        template<typename PrintFunc>
        void print(PrintFunc printFunc){
            for(int i=0;i<_size;i++){
                printFunc(arr[i]);
            }
            std::cout<<std::endl;
        }
        explicit array_list(int len) : _size(len) {
            arr = new T[len];
            this->_size = len;
        }
    };
}

#endif //DATA_STRUCTURE_ARRAY_LIST_H
