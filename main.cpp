#include <iostream>
#include "data_structure/ds.h."
#include "data_structure/testing/test.h"
using namespace ds;
int main() {
    ds::test::testArray();
    ds::test::testLinkedList();
    ds::test::testQueue();
    ds::test::testStack();
    ds::test::testFunctionPointer();
}

