#include<stdio.h>

int main() {

    int index[5];
    int *ptr=&index[5];

    for(int i=1;i<=5;i++) {
        printf("%d index :",i);
        scanf("%d",&index[i]);

    }

    for(int i=1;i<=5;i++) {
        printf("%d index :%d\n",i,index[i]);
    }    
    
}