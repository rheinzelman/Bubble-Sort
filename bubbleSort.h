//
// Created by Raymond Heinzelman on 2019-03-04.
//

#ifndef PROJ3_BUBBLESORT_H
#define PROJ3_BUBBLESORT_H

#include <iostream>

class bubbleSort{

public:

    bubbleSort(int *a, size_t size);
    ~bubbleSort();
    void insert(int value, int position);
    void swap(int pos1, int pos2);
    size_t size();
    void print();
    void sort();

private:

    int *array;

};



#endif //PROJ3_BUBBLESORT_H
