// Find the square of an integer number in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,square;// initialize variable num and square are int data type
    printf("\nEnter a number to find the square\n");// print a command to user
    scanf("%d",&num);// inputing the value of num variable
    square = num*num;// declare function(square = num x num)
    printf("Square of the given number is = %d\n",square);// printing the value of square.
    return 0;
}
