#include <stdio.h>

int main() {
    //Challenge Problem 1
    //A user can choose 4 products from a vending machine. Re-write these if statements as a switch statement
    int product_select = 1;

    if (product_select == 1 || product_select == 2 || product_select == 3 || product_select == 4 ){
        printf("You chose product %d", product_select);
    } else {
        printf("Your selection was invalid. Goodbye.");
    }
    
    //Challenge Problem 2
    //Given an array of 10 numbers, make it so that every number at an even index (ie. index 2,4,6,8,10) is even
    //BONUS: Use only one if statement
    int i;
    int array[10] = {2,7,3,4,5,6,1,9,12,9};
    
    for (i = 0; i < 10; i++){
        if (){
            //Your code here
        }
    }
    
    //Challenge Problem 3
    //Debug this code
    /*int j = -1;
    int array[10] = {2,7,3,4,5,6,1,9,12,9};
    for (j = 0, j <= 10, j++){
        if (array[i] != -1){
            printf("Array[%d] is %d", i, array[i])
        } else {
            break;
        }
    }*/
    return 0;
}
