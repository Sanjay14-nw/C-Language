#include<stdio.h>

void square(int n);

int main() {
   int n=5;
   square(n);
   printf("%d\n",n);

   return 0;
}

void square(int n) {
    printf("%d\n",n*n);
    // return n * n ;
}