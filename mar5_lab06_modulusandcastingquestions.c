/*Created 2nd October by Samantha Otazo*/

#include <stdio.h>


//General reminders:
//To compile (create some executable) use gcc yourfilename.c
//to review: implicit/explicit casting
//Conversions to binary, octal, and hex: whiteboard


int main() {
    /*Question 1: Think about what will be the value of the following operations. Then write a simple
program to check your answer. Your program will ask for two integers and output the value of
(first_number) % (second_number).
‐7 % 3 = ?
 7 % ‐3 = ?
‐7 % ‐3 = ?*/
    printf("The answer to -7 %% 3 is %d\n", -7 % 3); //we see that this computes 7 = -6/3 + -1/3 <- we are interested in the -1
    printf("The answer to 7 %% -3 is %d\n", 7 % (-3)); // Result is -2 with a remainder of 1
    printf("The answer to -7 %% -3 is %d\n", -7 % (-3)); // Result of division is 2 with a remainder of -1


/*Question 2: Insert ()’s in the following expression to indicate the precedence and give the result
5 % 3 * 2 + 12 / 5 ‐ ‐ 3.6 / 9 =
*/


    printf("Result withOUT parentheses is %f\n", 5 % 3 * 2 + 12 / 5 - - 3.6 / 9);
    printf("Result with parentheses is %f\n", ((5 % 3) * 2) + (12 / 5) - (- 3.6 / 9));
    //we see the second negative sign before 3.6 is an unary minus, which is at the top of our chart
    //we know mod, multiplication, and division have precedence over addition and subtraction
    //for operators that have the "same" precedence according to the chart, we will evaluate them from left to right

    //Explicit cast: we name the type conversion
    int a = 3;
    int b = 4;
    int result = 3;
    //Let's say we want to compute 3/4 as a floating point answer
    printf("3/4 with no cast is %d",3/4);
    printf("\n3/4 with an explicit cast on 4is %.2f", 3/((float)4));
    //we see here both an explicit cast on 4 and an implicit cast on 3


    result = 3/((float)4); //note that result has type int
    printf("\nResult is %f",result);
    //We already know that the result of 3/((float)4) is 0.75
    //However, we got a result of type int
    //when our floating point value of 0.75 is assigned to the integer type result,
    //It will be implicitely cast as an integer type variable and truncated down to 0


    return 0;
}
