#include <stdio.h>

int main()
{
    int a = 5;
    switch(a % 4) {
        case 0: printf("I am happy!\n"); break;
        case 2: printf("I am not that happy.\n"); break;
        default: printf("I am sad. \n"); break;
    }
    /*if (a % 4 == 0) {
        printf("I am happy!\n");
    } else {
        if (a % 4 == 2) {
            printf("I am not that happy.\n");
        } else {
            printf("I am sad. \n");
        }
    }*/
    return 0;
}
