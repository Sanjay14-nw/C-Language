#include<stdio.h>
#include<math.h>

int main() {

    int n;
    printf("enter a number :");
    scanf("%d",&n);ṇ

    int j=0;
    for(int i=1;i<=n;i++) {
        j = j + i;
        printf("%d",i);
    }
    return 0;
}