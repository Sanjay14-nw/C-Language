#include<stdio.h>

int main() {
    int age=54;
    int *ptr=&age;
    printf("%d\n",ptr);   //it lso work for float,char
    ptr++;

    printf("%d\n",ptr);
    ptr--;

    printf("%d",ptr);
}