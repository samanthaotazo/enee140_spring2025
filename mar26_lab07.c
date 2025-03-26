#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Example 1
    /*int x,y;
    scanf("%d %d", &x, &y);
    if (x > 0)
        if (y > 0)
            printf("Both positive.\n");
    else
        printf("x negative, y ignored.\n");
    */

    //Example 2
    /*int a = 5;
    if (a = 0) {
        printf("a=0 is true. \n");
    }
    else {
        printf("a=0 is not true.\n");
    }
    if (a == 0) {
        printf("a==0 is true. \n");
    }
    else {
        printf("a==0 is not true.\n");
    }*/


    //Example 3
    //Write a C program that generates 6 random even numbers between 2 and 20 (including both 2 and
    //20) and prints them out.
    srand(time(NULL));

    int result;

    for (;;) {
        result = 2 + 2*(rand() % 10);
        printf("Result is %d\n", result);
    }

    //HW Example
    /*char x;
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z'){
        printf("x is uppercase");
    }*/
    return 0;
}
