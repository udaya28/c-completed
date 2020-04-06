/*5.)Write a program in C to find the sum of the 
series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :
The sum of the series is : 34
*/
#include<stdio.h>
int factorial_of_number( int number );
void main()
{
    int number, sumis = 0, terms;
    printf( "Enter the number of terms : " );
    scanf( "%d", &terms );
    for( number = 1; number < terms+1 ; number++)
    {
        sumis += ( factorial_of_number( number ) /  number );
    }
    printf( "The sum of the series is : %d" , sumis );
}
//this function returns factorial of the number 
//Factorial of a Number Using Recursion
int factorial_of_number( int number )
{
    if( number == 1 || number == 0 )
    {
        return 1;
    }
    else
    {
        return ( number * factorial_of_number( number-1) );
    }
}