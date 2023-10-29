
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

void printPic(int size) {
    if (size < 1) {
        printf("Invalid size for the picture.\n");
        return;
    }
    int counter = 0;

    while(size>=1){
        if(counter%2==0){
            printTri(size,'.');
        }else if(counter%2==1){
            printTri(size,'o');
        }
        size = size - 1;
        counter ++;
    }
    
}

int main(void){
    int pictureSize = 4;

    printPic(pictureSize);

    return 0;
}