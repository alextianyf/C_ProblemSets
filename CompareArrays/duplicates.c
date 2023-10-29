/*
    Write a function that takes two arrays of integers and the size of each of those arrays and that returns the number of elements i nthe first array that are also found in the second array
*/

#include <stdio.h>

int compary_array(int array1[], int size1, int array2[], int size2){
    int count = 0;

    for(int i = 0; i < size1; i ++){
        for(int j = 0; j < size2; j++){
            if(array1[i] == array2[j]){
                count++;
                break;
            }
        }
    }

    return count;
}

void main(void){
    //int arrayA[5] = {3,6,1,2,-4};
    //int arrayB[6] = {7,9,-1,2,6,8};

    int arrayA[5] = {3,1,-4};
    int arrayB[6] = {7,9,-1,2,6,8};

    int result = compary_array(arrayA,(sizeof(arrayA)/sizeof(arrayA[0])),arrayB,(sizeof(arrayB)/sizeof(arrayB[0])));

    printf("The result is %d", result);

}