/*
3.)Write a program in C to swap two numbers using function.
Test Data:
Input 1st number : 2 
Input 2nd number : 4
Expected Output :
Before swapping: n1 = 2, n2 = 4 
After swapping: n1 = 4, n2 = 2
*/
#include<stdio.h>
void swap_of_two_numbers( int *number1 , int *number2 );
void main()
{
    int number1 , number2 ;
    printf( "Enter the first number : " );
    scanf( "%d" , &number1 );
    printf( "Enter the second number : " );
    scanf("%d" , &number2);
    printf( "Before swapping : number1 = %d, number2 = %d ", number1, number2 );
    swap_of_two_numbers( &number1 , &number2 );    //calling the function
    printf( "\nAfter swapping : number1 = %d, number2 = %d ", number1, number2 );
}
//this function swaps two number
void swap_of_two_numbers( int *number1 , int *number2 )
{
    int temp;
    temp = *number1 ;
    *number1 = *number2 ;
    *number2 = temp ;
}