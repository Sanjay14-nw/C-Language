#include<stdio.h>

int main() {

    int age ;

    printf("enter age :");
    scanf("%d",&age);

    if(age>18) {
        printf("adult");
    }

    else if(13<age<18) {
        printf("you re teenager :");
    }

    else {
        printf("not adult");
    }
    
    return 0;
}