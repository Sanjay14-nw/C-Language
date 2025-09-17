#include<stdio.h>
#include<math.h>

float temp(float t);

int main() {
    float fahren=temp(0);
    printf("%f",temp(0));
    return 0;
}

float temp(float t) {

    float fahren= t* 0.18 + 32 ;
    return fahren;
}