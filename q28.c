#include<stdio.h>

void namaste();
void bonjour();
void namaste()
{
    printf("namaste ");
}
void bonjour() {
    printf("bonjour");
}
int main() {

    printf("enter i or f : ");
    char ch ;
    scanf("%c", &ch);

    if(ch == 'i' )  { 
        namaste();
    } else {
        bonjour();
    }
}
