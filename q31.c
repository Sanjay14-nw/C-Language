#include<stdio.h>

int fact(int f);

int main() {
      printf("%d",fact(4));
    return 0;
}

int fact(int f) {
    if(f==1) {
        return 1;
    }
    int fact1=fact(f-1);
    int fact2=fact1*f;
    return fact2;
}