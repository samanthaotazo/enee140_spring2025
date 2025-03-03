/*What happens if the number of variables passed to the scanf function,
 * and/or the variable types, do not match those specified in the format
 * string? Write a simple program to verify your answer.
Created by Samantha Otazo on September 25th.
* Modified 26 Feb 2025. */

#include <stdio.h>

int main() {
    int int_input, int_input2;
    float float_input;
    char char_input;

    //prompt the user input:
    //printf("Type an integer here: ");

    /*scanf("%d", &int_input);
    printf("\nYou typed %d", int_input);
    printf("\nType a floating point value here: ");
    scanf("%d", &int_input); //here, we see format specifier type matches our variable
    printf("You typed %d", int_input); //we scanned in the truncated float value
    */

    //Advantages of scanf over getchar
    //multiple inputs
    char in1;
    char in2;
    char in3;

    /*printf("Type in there letters in the format <t y z>");
    scanf("%c %c %c", &in1, &in2, &in3); //note that with getchar we would have to use three separate statements

    printf("You typed %c %c %c", in1, in2, in3);*/
    //inputs of certain type
    /*int input = 0;

    in1 = getchar(); //note that this would take in characters ONLY
    scanf("%d", &input); //you can specify the format type*/

    /*printf("\nType in two numbers: ");
    scanf("%d %d", &int_input);
    printf("\nYou typed %d", int_input);*/

    /*scanf("%d", &int_input, &int_input2);
    printf("\nYou typed %d", int_input);*/

    printf("\nType in one number: ");
    //scanf("%f", &int_input);
    //printf("Your number was %f", (float)int_input);

    scanf("%d", &float_input);
    printf("Your number was %f", float_input);
    return 0;
}
