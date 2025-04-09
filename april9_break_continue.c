#include <stdio.h>
/* This program illustrates how break and continue work in loop
                                                        Gang Qu
                                                        Oct. 25, 2011
                                                        Tudor Dumitras
                                                        Apr. 12, 2014
*/

int main(void)
{
    int x, y;
    //Convert to while loop
    /*x = 1;
    while (x<10){
        if (x == 5)
            break;
        printf("%2d", x);
        x++;
    }

    printf("\nx=%2d\n",x);

     //With continue statement, we skip the y++. Move it to top and adjust initial conditions.
    y = 0;
    while (y<9) {
        y++;
        if (y == 5) {
            continue;
        }
        printf("%2d", y);
    }
    y++;
    printf("\ny=%2d\n",y);*/

    x = 1;
    do{
        if (x == 5)
            break;
        printf("%2d", x);
        x++;
    }while (x<10);

    printf("\nx=%2d\n",x);

    y = 0;
    do{
        y++;
        if (y == 5) {
            continue;
        }
        printf("%2d", y);
    } while (y<9);
    y++;
    printf("\ny=%2d\n",y);

    return 0;
}


