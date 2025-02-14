#include <stdio.h>
#include <math.h>
int func2(int int1, int int2);
float func1(int int1, int int2);
int main() {
    /*Function 1 : Write a function that takes two integer inputs and returns their floating type
 * result of integer 1/integer 2. Test your program with int1 is 3 and int 2 in main. Name your function func1*/
    int x = 3;
    int y = 2;
    float result1;

    result1 = func1(x, y);

    printf("The result was %.2f", result1);

    /*Write a function that raises int 1 to the power of int 2 and then adds 2. Name your function func2. Hint:
     * you might need other libaries for this. */

    /*Write a function of type void that adds two numbers. Does it modify them in main? Write a printf statement
     * to test this.*/
    printf("x is %d, y is %d\n",x,y);

    return 0;
}
float func1 (int int1, int int2){
    return (float)int1/int2;
}
int func2(int int1, int int2){
    return pow(int1, int2) +1;
}
void func3(int int1,int int2){
    int1 += int1;
    int2 = 7;
}
