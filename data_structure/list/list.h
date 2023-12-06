//
// Created by 39511 on 2023/12/4.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H
namespace ds{
    template<typename T>
    class list {
    public:
        virtual ~list()= default;
        virtual T get(int index)=0;
        virtual void print()=0;
        virtual int size()=0;
    };
}


#endif //DATA_STRUCTURE_LIST_H
