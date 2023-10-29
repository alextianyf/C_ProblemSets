#include <stdio.h>

void printChars(int nChars, char printChar){
    int countChars = 0;
    while (countChars < nChars) {
        printf("%c", printChar);
        countChars++;
    }
}

void printTri(int size, char character) {
    for (int i = 1; i <= size; i++) {
        printChars(i, character);
        printf("\n");
    }
}

int main(void){
    int triangleSize = 5;
    char fillCharacter = '*';

    printTri(triangleSize, fillCharacter);

    return 0;
}