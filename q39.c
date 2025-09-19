#include<stdio.h>

int printaddress(int n);
int printadress(int *n);


int main() {
    int n = 4;

    printf("%d\n",&n);

    printaddress(n);
    printadress(&n);

}

int printaddress(int n) {
    printf("%d\n",&n);
}

int printadress(int *n) {
    printf("%d",n);
}