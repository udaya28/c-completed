
// 1st section : Documentation Section 

/*           This is The Documentation Section 
Write a program in C to show the simple structure of a function.
Expected Output : The total is : 11
*/

// 2nd section : The Link section
#include<stdio.h>

// 3rd section : Definition Section
int sum_of_two_numbers( int a , int b );
 
// 4th section : Global declaration section
int a = 5,b = 6;

// 5th section : Main() Function Section
void main()
{
    int total;
    total = sum_of_two_numbers( a, b );
    printf( "The total is : %d" , total );

}

// 6th section : Subprogram Section
//this function return sum of two numbers
int sum_of_two_numbers( int a , int b )
{
    return( a + b );
}