//
// Created by Raymond Heinzelman on 2019-03-04.
//

#include "bubbleSort.h"

using namespace std;

//Parameterized Ctor
bubbleSort::bubbleSort(int *a, size_t size) {
    array = new int[size];
    for(int i = 0; i < size; i++){
        array[i] = a[i];
    }
}

//Destructor
bubbleSort::~bubbleSort(){
    delete [] array;
}

//insert(): helper function that populates the arrays
void bubbleSort::insert(int value, int position) {
    array[position] = value;
}

//swap(): swaps array[pos1] with array[pos2]
void bubbleSort::swap(int pos1, int pos2) {
    int temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}

//size(): returns the size of the array
size_t bubbleSort::size() {
    int size = 0;
    while (array[size]) {
        size++;
    }
    return size-1;
}

//print(): prints chosen array
void bubbleSort::print() {
    for(int i = 0; i < size(); i++){
        cout << array[i] << endl;
    }
}

//sort(): will sort the array
void bubbleSort::sort(){

    int n = size();

    //begin assuming list is unsorted
    bool sorted = false;
    int pass = 1;

    //while the list is unsorted, do:
    while(!sorted && (pass < n)){
        sorted = true;
        for(int i = 0; i < n - pass;i++){
            if(array[i] > array[i+1]){
                swap(i,i+1);
                sorted = false;
            }
        }
        pass++;
    }//end while()
}