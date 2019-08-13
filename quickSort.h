//
// Created by Raymond Heinzelman on 2019-03-11.
//

#ifndef PROJ3_QUICKSORT_H
#define PROJ3_QUICKSORT_H

#include <iostream>

class quickSort{

public:
    quickSort(int *a, size_t size);
    void sort(int first, int last);
    int partition(int* a, int first, int last);
    void swap(int pos1, int pos2);
    int size();
    void print();
    ~quickSort();

private:

    int *array;

};

#endif //PROJ3_QUICKSORT_H
