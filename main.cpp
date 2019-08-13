#include <iostream>
#include <time.h>

#include "bubbleSort.h"
#include "quickSort.h"

using namespace std;

int LOOP_TOTAL = 10;

int main() {

    //Array initialization for arrays of size 1000, 10000, and 100000
    int array1[1000];
    int array2[10000];
    int array3[100000];

    //bubbleSort Averages
    double bSAAverage = 0;
    double bSBAverage = 0;
    double bSCAverage = 0;
    //quickSort Averages
    double qSAAverage = 0;
    double qSBAverage = 0;
    double qSCAverage = 0;

    //loop that will run the test LOOP_TOTAL times, each time using a new set of random data
    int count = 0;
    while(count < LOOP_TOTAL){

        for (int i = 0; i < 1000; i++) {
            array1[i] = rand() % 10000001;
        }
        for (int i = 0; i < 10000; i++) {
            array2[i] = rand() % 10000001;
        }
        for (int i = 0; i < 100000; i++) {
            array3[i] = rand() % 10000001;
        }

        cout << endl << "RUN NUMBER: " << count+1 << endl;

        /*====================================================================================
         * Naming system follows this: bSA means bubbleSortA, bSB means bubbleSort B, etc.
         * bSDA means bubbleSort Duration A, bSDB means bubbleSort Duration B, etc.
         * qSA means quickSortA, so on and so forth.
         *====================================================================================*/

        //Bubble sort test cases with their duration in seconds:
        clock_t bSA;
        double bSDA;
        bubbleSort bubbleSortA(array1, 1000);
        bSA = clock();
        bubbleSortA.sort();
        bSDA = (clock() - bSA) / (double) CLOCKS_PER_SEC;
        cout << "-=BubbleSort Test A(1000) Completed=-" << endl;
        cout << "Duration: " << bSDA << " seconds." << endl;
        bSAAverage += bSDA;

        clock_t bSB;
        double bSDB;
        bubbleSort bubbleSortB(array2, 10000);
        bSB = clock();
        bubbleSortB.sort();
        bSDB = (clock() - bSB) / (double) CLOCKS_PER_SEC;
        cout << "-=BubbleSort Test B(10000) Completed=-" << endl;
        cout << "Duration: " << bSDB << " seconds." << endl;
        bSBAverage += bSDB;

        clock_t bSC;
        double bSDC;
        bubbleSort bubbleSortC(array3, 100000);
        bSC = clock();
        bubbleSortC.sort();
        bSDC = (clock() - bSC) / (double) CLOCKS_PER_SEC;
        cout << "-=BubbleSort Test C(100000) Completed=-" << endl;
        cout << "Duration: " << bSDC << " seconds." << endl;
        bSCAverage += bSDC;

        cout << endl;

        //Quick sort test cases with their duration in seconds:
        clock_t qSA;
        double qSDA;
        bubbleSort quickSortA(array1, 1000);
        qSA = clock();
        quickSortA.sort();
        qSDA = (clock() - qSA) / (double) CLOCKS_PER_SEC;
        cout << "-=QuickSort Test A(1000) Completed=-" << endl;
        cout << "Duration: " << qSDA << " seconds." << endl;
        qSAAverage += qSDA;

        clock_t qSB;
        double qSDB;
        bubbleSort quickSortB(array2, 10000);
        qSB = clock();
        quickSortB.sort();
        qSDB = (clock() - qSB) / (double) CLOCKS_PER_SEC;
        cout << "-=QuickSort Test B(10000) Completed=-" << endl;
        cout << "Duration: " << qSDB << " seconds." << endl;
        qSBAverage += qSDB;


        clock_t qSC;
        double qSDC;
        bubbleSort quickSortC(array3, 100000);
        qSC = clock();
        quickSortC.sort();
        qSDC = (clock() - qSC) / (double) CLOCKS_PER_SEC;
        cout << "-=QuickSort Test C(100000) Completed=-" << endl;
        cout << "Duration: " << qSDC << " seconds." << endl;
        qSCAverage += qSDC;

        count++;

    }

    //Computes and outputs the average sorting times
    cout << "BubbleSort Averages: " << endl << endl;
    cout << "BubbleSort A: " << bSAAverage / count << endl;
    cout << "BubbleSort B: " << bSBAverage / count << endl;
    cout << "BubbleSort C: " << bSCAverage / count << endl;

    cout << endl;

    cout << "QuickSort Averages: " << endl << endl;
    cout << "QuickSort A: " << qSAAverage / count << endl;
    cout << "QuickSort B: " << qSBAverage / count << endl;
    cout << "QuickSort C: " << qSCAverage / count << endl;

    return 0;

}