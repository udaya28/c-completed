/*2.)Write a program in C to find the square of any number using the function.
 Test Data:
Input any number for square:20 
Expected Output :
The square of 20 is : 400.00
*/
#include<stdio.h>
int square_of_number( int number );
void main()
{
    int number, square_is ;
    printf( "Input any number for square : " );
    scanf( "%d" , &number );
    square_is = square_of_number( number );
    printf( "The square of %d is : %d", number , square_is );

}
// this function return square of the number
int square_of_number( int number )
{
    return( number * number );
}