#include<stdio.h>

int sum(int n);

int main() {
    printf("%d",sum(6));

    return 0;
}

int sum(int n) {
    if(n ==1) {
        return 1;
    }

    int sumNum1=sum(n-1);
    int sumN=sumNum1+n;
    return sumN;
}