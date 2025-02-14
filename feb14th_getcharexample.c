#include <stdio.h>

int main() {
    /*Challenge 1: Write a segment of code that asks a question and prompts "Y" or "N" answer. If the user replies N,
     * return to the top of the loop and repeat until they say yes. If they enter an invalid input,
     * use printf to write an error message.*/
    char input = 'N';

    while (input != 'Y'){
        printf("Do you like apples?\n");
        input = getchar();
        printf("You said %c\n", input);
        if (input != 'N'|| input != 'Y'){
            printf("Please type Y\n");
        }
        getchar();
    }
    return 0;
}
