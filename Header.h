//
//  Header.h
//  LAB 2 326
//
//  Created by Sabahet Alovic on 2/6/20.
//  Copyright © 2020 Sabahet Alovic. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


static int size = 10;

template < class T >
class TOC
{
private:
    int num_used;
    int capacity;
    T* myArray;
public:
    TOC(int size = 10){
        myArray = new T[size];
        capacity =10;
    }
        void change(T y,T x);
        bool full();
        bool ifEmpty();
        int getCapacity();
        int getNumUsed(); // returns current number of elements in the array
        T get(int y); // returns an item at given index
        void add(T x); // add item to the array at the next available position
        int getPosition(T x); // returns an index of the item x
        void insertAt(T x, int y); // insert item x at the given index: bounds for index [0 - numUsed]
        void remove(int x); // remove an item from the given index
        void display(); // display all elements in the array
        void resize(); // double the size of your array
        //~TOC(); // release memory for the array
};
    
#endif /* Header_h */
