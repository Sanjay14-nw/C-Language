#include<stdio.h>

void printHW(int count);


int main() {
    printHW(5);
    return 0;
}

void printHw(int count) {
    if(count == 0) {
        return;
    }
    printf("hello word\n");
    printHW(count-1);
}