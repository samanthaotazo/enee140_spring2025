#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int biggest = 251;
    int number;

    number = rand() % biggest;

    printf("The pseudo-random number is %d", number);



    return 0;
}
