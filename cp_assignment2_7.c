/*7.)
Write a C programming to find out maximum and minimum 
of some values using function which will return an array.
Test Data  : Input 5 values
25
11
35
65
20
Expected Output :
Number of values you want to input: Input 5 values Minimum value is: 11
Maximum value is: 65
*/
#include<stdio.h>

void swap_of_two_numbers( int *number1, int *number2 );
void  max_and_min_of_array( int array[] , int length );

void main()
{
    int length, i;
    printf( "Enter number of elements : " );
    scanf( "%d" , &length );
    int array[length];
    for( i = 0; i < length; i++)
    { 
        scanf( "%d" , &array[i]);
    }
    max_and_min_of_array( array , length );
}

//this function input an array 
//this function print the maximum and minimum of array
void  max_and_min_of_array( int array[] ,int length)
{
    int  i , j , start , temp;
    for( i = 0; i < length-1; i++ )
    {
        start=i;
        for( j=i ; j<length;j++ )
        {
            if( array[i] > array[j+1] )
            {
                swap_of_two_numbers( &array[i], &array[j+1] );
                break;
            }
        }
    }
    printf( "Minimum value is : %d", array[0] );
    printf( "\nMaximum value is : %d", array[length-1] );
}

// this functions swaps the number by using call by reference
void swap_of_two_numbers(int *number1,int *number2)
{
    int temp;
    temp = *number1 ;
    *number1 = *number2 ;
    *number2 = temp ;
}