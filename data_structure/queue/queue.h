//
// Created by 39511 on 2023/12/6.
//

#ifndef DATA_STRUCTURE_QUEUE_H
#define DATA_STRUCTURE_QUEUE_H
#define QUEUE_INIT_SIZE 8
#include<iostream>
#include "../list/list.h"

namespace ds{
    template<typename T>
    class queue{
        int _head;
        int _rear;
        int _size;
        T* list;
    public:
        ~queue(){
            delete[] list;
        }
        explicit queue(T val):_head(0),_rear(1),_size(QUEUE_INIT_SIZE){
            list=new T[_size];
            list[0]=val;
        }
        queue():_head(0),_rear(0),list(new T[QUEUE_INIT_SIZE]),_size(QUEUE_INIT_SIZE){}
        void push(int val){
            if(_rear>=_size){
                T* newList=new T[2*_size];
                for(int i=0;i<sizeof(newList);i++){
                    newList[i]=list[i];
                }
                delete[] list;
                list=newList;
                _size*=2;
            }
            list[_rear]=val;
            _rear++;
        }
        T pop(){
            T temp=list[_head];
            _head++;
            return temp;
        }
        int size(){
            return _rear-_head;
        }
        void print(){
            for(int i=_head;i<_rear;i++){
                std::cout<<list[i]<<" ";
            }
            std::cout<<std::endl;
        }
        template<typename PrintFunc>
        void print(PrintFunc printFunc){
            for(int i=_head;i<_rear;i++){
                printFunc(list[i]);
            }
            std::cout<<std::endl;
        }
    };
}
#endif //DATA_STRUCTURE_QUEUE_H
