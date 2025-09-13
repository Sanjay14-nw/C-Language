#include<stdio.h>
#include<math.h>

int main () {
    //printf("%d",(4<5) && (3>2));  // result 1
    //printf("%d",(4<5) && (3>4));   // result 0
     //printf("%d",(4<5) || (3>4));   // result 1
      printf("%d",!((4<5) && (3>4)));
    return 0;
}