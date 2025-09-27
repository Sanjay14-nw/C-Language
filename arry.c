#include<stdio.h>

int main() {

    // int num1=1;
    // int num2=4;
    // int num3=6;

    // int num[] = {1,4,6};

    int marks[3];

    printf("enter 1st number : ");
    scanf("%d",&marks[0]);

     printf("enter 2nd number : ");
    scanf("%d",&marks[1]);

     printf("enter 3rd number : ");
    scanf("%d",&marks[2]);

    printf("1st=%d,2nd=%d,3rd=%d",marks[0],marks[1],marks[2]);

    return 0;
}