# C++ Data Structures Library

## Introduction

This repository contains a collection of classic data structures implemented in C++. The project aims to provide a comprehensive set of examples for those transitioning from Java (or other high-level languages) to C++, especially for applications in OS development and other low-level programming fields. The implementations cover fundamental data structures and offer a deep dive into C++ specifics, such as memory management, templates, and the Standard Template Library (STL).

## Data Structures Included

- **LinkedList**: A sequence of elements where each element points to the next, allowing for efficient element insertion and removal.
- **Stack**: A collection of elements that follows the Last In, First Out (LIFO) principle.
- **Queue**: A collection of elements that follows the First In, First Out (FIFO) principle.
- **Tree**: Hierarchical tree-like structures including binary trees, AVL trees, etc.
- **Graph**: Representing and traversing nodes connected by edges.
- **HashTable**: Efficient key-value storage and retrieval.
- ... _[more data structures as per your implementation]_

## Prerequisites

To use this library, you'll need:
- A C++ compiler (e.g., GCC, Clang)
- Basic understanding of C++ syntax and concepts

## Installation

1. Clone the repository:
2. Compile the source code (example using g++):
3. Run the compiled program:

## Usage

Each data structure is implemented in its own header file. To use a data structure in your project, include the corresponding header file in your source code.

Example:
```cpp
#include "LinkedList.h"

int main() {
 ds::LinkedList<int> list;
 list.addNode(1);
 list.addNode(2);
 list.print();
 return 0;
}
