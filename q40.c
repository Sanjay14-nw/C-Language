#include<stdio.h>

int sum(int a,int b);
int pro(int a,int b);

int main() {
    int a = 3;
    int b = 5;

    sum(a,b);
    pro(a,b);

    printf("average if two =%d\n",(a+b)/2);

    return 0;
}

int sum(int a,int b){
   printf("%d\n", a + b );
}

int pro(int a,int b){
   printf("%d\n", a * b) ;
}