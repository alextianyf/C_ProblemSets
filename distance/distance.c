/*
    write a function distance taht takes two arrays of type int and the size of each as its only parameters 
    and that returns the distance between the two arrays. 
    The distance between two arrays is defined to be the smallest difference in absolute value between any pair of values chosen from the two arrays, one element from each array.
*/

#include <stdio.h>
#include <stdlib.h>

int distance(int array1[], int size1, int array2[], int size2) {
    if (size1 == 0 || size2 == 0) {
        return -1;
    }

    int minDiff = abs(array1[0] - array2[0]);

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            int diff = abs(array1[i] - array2[j]);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    return minDiff;
}

int main(void){
    int arr1[] = {3,4,1};
    int arr2[] = {7,9,6,-3};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int result = distance(arr1,size1,arr2,size2);

    if(result != -1){
        printf("The smallest distance is: %d", result);
    }else{
        printf("One or both arrays are empty\n");
    }

    return 0;
}