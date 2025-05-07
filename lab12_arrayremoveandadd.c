/*Given an integer array a[8] = {2, 3, 5, 7, 11, 13, 17, 19}, read three integers k, m, and
x from the terminal. When k is a valid array index (i.e., between 0 and 7), remove a[k] from the
array by shifting all the elements from k+1 to the end of the array one place to the left (so that
a[k] takes the value of the old a[k+1], a[k+1] takes the value of the old a[k+2], etc.). Then,
if m is a valid array index, insert integer x on position m of the array and shift the elements from
m+1 to the end of the array one place to the right (so that a[m+1] takes the value of the old a[m],
a[m+2] takes the value of the old a[m+1], etc.).
After these two operations, print out the elements in the array. The array should not have lost
any elements other than the old a[], and all the old elements should have retained their original
order.
For example, if we have k=2, m=5, x=10 then the array will be changed to
{2, 3, 7, 11, 10, 13, 17, 19}.*/

#include <stdio.h>
#define N 8
void printarray(int arr[], int n);
int main() {
    int a[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    int k,m,x;

    //Prompt user input
    printf("Enter three integers: \n");
    scanf("%d %d %d", &k, &m, &x);

    //Check if index is valid and remove array
    if (k >= 0 && k <= N - 1){
        //Remove k and shift left
        for (int i = k; i < N -1; i++){
            a[i] = a[i+1];
        }
    }
    printarray(a,8); //Note that with the define statement, you don't actually need the size
    //Check if index is valid and shift array right then insert

    //Note that m is not an index, it's position so it's index + 1
    if (m>= 1&& m<= N){
        for(int i = N - 1; i > m - 1; i--){
            a[i] = a[i-1];
        }
        a[m-1]=x;
    }
    printf("\nfinal array is:");
    printarray(a,8);
    return 0;
}
void printarray(int arr[],int n){
    for (int i = 0; i < n;i++){
        printf("%d ",arr[i]);
    }

}
