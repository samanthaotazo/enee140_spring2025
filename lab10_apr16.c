#include <stdio.h>
#define MAX_STRING 50

int main() {
    char string[MAX_STRING] ="";
    int index;

    printf("Type a string here:");
    fgets(string,MAX_STRING,stdin);

    //Find the end of the string
    //We will look for \0
    for (index = 0;index < MAX_STRING;index++){
        if (string[index] == '\0'){
            break;
        }
    }
    printf("String is %d characters long including '\0' character.\n", index);

    //Print the string backwards
    for(index = index -1;index >= 0;index--){
        printf("%c",string[index]);
    }

    return 0;
}
