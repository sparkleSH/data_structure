//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H
#include <iostream>
#include "../list/list.h"

#define STACK_INIT_SIZE 8
namespace ds{
    template<typename T>
    class stack{
        int _top;
        T* list;
        int _size;
    public:
        ~stack(){
            delete[] list;
        }
        explicit stack(int value):_top(0),_size(STACK_INIT_SIZE){
            list=new T[STACK_INIT_SIZE];
            list[_top]=value;
        }
        stack():_top(-1),_size(STACK_INIT_SIZE){
            list=new T[STACK_INIT_SIZE];
        }
        void push(T value){
            if(_top>=_size-1){
                T* newList=new T[_size*2];
                for(int i=0;i<_top;i++){
                    newList[i]=list[i];
                }
                delete[] list;
            }
            _top++;
            list[_top]=value;
        }
        T pop(){
            if(_top<=-1)
                throw std::out_of_range("Index out of Bounds");
            return list[_top--];
        }
        void print(){
            for(int i=0;i<=_top;i++){
                std::cout<<list[i]<<" ";
            }
            std::cout<<std::endl;
        }
        template<typename PrintFunc>
        void print(PrintFunc printFunc){
            for(int i=0;i<=_top;i++){
                printFunc(list[i]);
            }
            std::cout<<std::endl;
        }
    };
}
#endif //DATA_STRUCTURE_STACK_H
