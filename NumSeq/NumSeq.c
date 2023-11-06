/*
write a C program that reads in values from the keyboard and prints out either the word Valid or Invalid according to the following specification. 
You may assume that all NumSeq numbers in the sequence will be provided.(You don't need to check for too few numbers being entered.) 
Your program will first read in two integers: The first integer, NumSeq, represents the number of elements of the sequence. 
The second integer, NumEven, represents a check condition(to be explained). Your program will then read a sequence of NumSeq postive integers. 
A sequence is valid if at most the first NumEven numbers are even and the rest of the sequence are odd numbers. 
Note that the second part of a valid sequence must not contain any even numbers.
*/

#include <stdio.h>

int main() {
    int NumSeq, NumEven;
    
    // Read the number of elements in the sequence and the NumEven condition
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &NumSeq);
    printf("Enter the value of NumEven: ");
    scanf("%d", &NumEven);
    
    int evenCount = 0;
    int oddCount = 0;
    int currentNumber;
    int isValid = 1; // Assume the sequence is valid by default
    
    printf("Enter the sequence of %d positive integers:\n", NumSeq);
    
    for (int i = 0; i < NumSeq; i++) {
        scanf("%d", &currentNumber);
        
        if (i < NumEven) {
            // Check the first NumEven numbers
            if (currentNumber % 2 == 0) {
                evenCount++;
                if (evenCount > NumEven) {
                    isValid = 0; // Too many even numbers in the first part
                }
            }
        } else {
            // Check the rest of the numbers
            if (currentNumber % 2 == 0) {
                isValid = 0; // Even number found in the second part
            } else {
                oddCount++;
            }
        }
    }
    
    // Check if the sequence is valid according to the conditions
    if (evenCount <= NumEven && oddCount == (NumSeq - NumEven)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}