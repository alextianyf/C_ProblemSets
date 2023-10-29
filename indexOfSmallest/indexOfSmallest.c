
/*
    write a function name indexOfSmallest taht takes an array of integers, the size of the array, and an integer startIndex as its only parameters, 
    and that returns the index of the smallest item between index startIndex and the end of the array
*/
#include <stdio.h>

int indexOfSmallest(int array[], int size, int startIndex){
    
    if(startIndex<0||startIndex>=size){
        return -1;
    }

    int minIndex = startIndex;
    int minValue = array[startIndex];

    for(int i = startIndex+1; i < size; i++){
        if (array[i] < minValue)
        {
            minValue = array[i];
            minIndex = i;
        }   
    }
    return minIndex;
}

void main(void){
    int data[] = {4,-1,3,8,7,2,9};

    int arrayLength = sizeof(data)/sizeof(data[0]);

    int result = indexOfSmallest(data, arrayLength, 1);

    if(result != -1){
        printf("The smallest index is: %d", result);
    }else{
        printf("Invalid startIndex.\n");
    }
}