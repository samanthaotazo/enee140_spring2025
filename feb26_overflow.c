/* This code reviews how to access the limits.h header file
 * to explore overflow.
 * Created 26 February by Samantha Otazo */

#include <stdio.h>
#include <limits.h>

int main() {
    //Overflows and "loops" around to INT_MIN
    printf("INT_MAX + 1 is %d\n", INT_MAX + 1);
    //Implicit casting...see chart to see what is UINT_MAX + 1 - 1?
    printf("UINT_MAX is %d\n", UINT_MAX);
    return 0;
}
