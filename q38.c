#include<stdio.h>

void swap(int *a,int *b);

int main() {
    int a =4;
    int b=5;

    swap(&a,&b);

    printf("a=%d\n b=%d",a,b);

}

void swap(int *a,int *b) {
    int t=*a;
     *a=*b;
     *b=t;

    
}