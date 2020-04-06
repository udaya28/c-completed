/*4.)Write a program in C to check a given number
 is even or odd using the function.
Test Data :
Input any number : 5 
Expected Output :
The entered number is odd.
*/
#include<stdio.h>
int check_odd_or_even( int number );
void main()
{
    int number, result;
    printf( "Enter the number to check odd or even : " );
    scanf( "%d", &number ); 
    result = check_odd_or_even( number );
    if ( result == 1 )
    {
        printf( "The entered number is even." );
    }
    else
    {
        printf( "The entered number is odd." );
    }
}
//function to find given number is odd or even
//this function return 1 if number is even or returns 0 if it is odd
int check_odd_or_even( int number )
{
    return( number % 2 == 0 ? 1 : 0 );
}