#include<stdio.h>

int main() {
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    // for(int i=1; i<=10 ;i++) {
    //     printf("%d \n",i*n);
    // }


    // int i=1;
    // while (i<=10)
    // {
    //  printf("%d \n",i*n);
    //  i++;
    // }

    int i=1;
    do
    {
        printf("%d \n",i*n);
        i++;
    } while (i<=10);
    
    
}