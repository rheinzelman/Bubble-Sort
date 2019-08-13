//
// Created by Raymond Heinzelman on 2019-03-11.
//

#include "quickSort.h"

using namespace std;

void insertionSort(int a[], int n);

int MIN_SIZE = 1;

//parameterized ctor
quickSort::quickSort(int *a, size_t size) {
    array = new int[size];
    for(int i = 0; i < size; i++){
        array[i] = a[i];
    }
}

//sort(): sorts array using quicksort algorithm
void quickSort::sort(int first, int last) {

    if((last-first+1) < MIN_SIZE){
        insertionSort(array, size());
    }
    else{
        int pivotIndex = partition(array, first, last);

        sort(first, pivotIndex-1);
        sort(pivotIndex+1, last);
    }//end if

}//end sort():

//partition(): another helper function for the quickSort algorithm
int quickSort::partition(int a[], int first, int last){
    //get pivot point, mid in this case
    int mid = first + (last - first) / 2;
    //setting the 'first' index
    int i = first-1;
    for(int j = first; j <= last-1; j++){
        //swap array[i] with array[j] if i is bigger than j
        if(a[j] <= mid){
            i++;
            swap(i,j);
        }
    }
    swap(i+1,last);
    return mid;
}

//swap(): swaps array[pos1] with array [pos2]
void quickSort::swap(int pos1, int pos2){
    int temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}

//size(): returns the size of the array
int quickSort::size() {
    int counter = 0;
    while(array[counter]){
        counter++;
    }
    return counter-1;
}

//print(): prints the array
void quickSort::print() {
    for(int i = 0; i < size(); i++){
        cout << array[i] << endl;
    }
}

//destructor
quickSort::~quickSort(){
    delete [] array;
}

//insertionSort(): used as a helper function for the quickSort algorithm
void insertionSort(int a[], int n){
    for(int unsorted = 1; unsorted < n; unsorted++){
        int temp = a[unsorted];
        int loc = unsorted;
        while((loc > 0) && (a[loc-1] > a[loc])){
            a[loc] = a[loc-1];
            loc--;
        }
        a[loc] = temp;
    }
}

