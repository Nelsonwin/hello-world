#include <stdio.h>

int main() {
    int x = 28;
    int y = 50;

    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    //swapping...
    int temp = x;
    x = y;
    y = temp;
    
    printf("Enter the value of x\n");
    scanf("%d", &x);

    printf("Enter the value of y\n");
    scanf("%d", &y);

    printf("x is now %d\n", x);
    printf("y is now %d\n", y);
    temp += 1;
    temp ++;
    temp --;
    printf("temp is %d\n", temp);

    int n;

    printf("Enter number of stars\n");
    scanf("%d", &n);

    int i, j;

    for (i = 0; i < n; i++) {

        for (j = 0; j <= i; j++) {
            printf("(|");
        }

        printf("\n");
        j = 0;
        
    }
    


    return 0;
}
