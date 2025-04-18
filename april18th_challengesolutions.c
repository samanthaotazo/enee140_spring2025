#include <stdio.h>

int main() {
    //Challenge Problem 1
    //A user can choose 4 products from a vending machine. Re-write these if statements as a switch statement
    int product_select = 1;

    //scanf("%d", &product_select);
    /*if (product_select == 1 || product_select == 2 || product_select == 3 || product_select == 4 ){
        printf("You chose product %d", product_select);
    } else {
        printf("Your selection was invalid. Goodbye.");
    }*/
    switch(product_select){
        case 1:
        case 2:
        case 3:
        case 4: printf("You chose product %d", product_select); break;
        default: printf("Your selection was invalid. Goodbye."); break;
    }

    //Challenge Problem 2
    //Given an array of 10 numbers, make it so that every number at an even index (ie. index 0, 2,4,6,8,10) or odd position (ie
    // the 1st, 3rd, 5th, 7th, 9th position) is even
    //BONUS: Use only one if statement
    int i;
    int array[10] = {2,7,3,4,5,6,1,9,12,9};
    //Solution 1
    /*
    for (i = 0; i < 10; i = i + 2){
        if (array[i] % 2 != 0){
            array[i]++;
        }
    }*/

    //Solution 2
    for (i = 0; i < 10; i++){
        if (i % 2 == 0 && array[i] % 2 != 0){
            array[i]++;
        }
    }

    //Test array
    for (i = 0; i < 10; i++){
        printf("\narray[%d] is %d\n", i, array[i]);

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
    
    //Solution
    //Debug this code
    /*int j = -1; //Not a bug...but not used
    int array[10] = {2,7,3,4,5,6,1,9,12,9};
    for (j = 0, j <= 10, j++){ //this is out of bounds
        if (array[i] != -1){ //uses i instead of j
            printf("Array[%d] is %d", i, array[i]) //uses i instead of j
        } else {
            break; //never reaches
        }
    }*/
    return 0;
}
