#include<stdio.h>
#include<math.h>
 int main() {
    int a = 3;
    int b = 6;
    a %= b;             //a /= b;       //a *= b;       //a -= b;          //a += b;
    printf("%d",a);
 }