#include <stdio.h>

int main() {
    int x = 28;
    int y = 51;

    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    //swapping...
    int temp = x;
    x = y;
    y = temp;

    printf("x is now %d\n", x);
    printf("y is now %d\n", y);


    return 0;
}