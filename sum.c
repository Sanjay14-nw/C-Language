#include<stdio.h>

int main()
{   int a;
    int b;

    printf("enter the first no :");
    scanf("%d",&a);

    printf("enter the second no :");
    scanf("%d",&b);

    int c = a+b;
  
    printf("the sum of two no :%d /n", c  );

    int r;
    
     printf("enter the third no :");
     scanf("%d",&r);

     printf("the sum of three no : %d",c + r);
    return 0;
}