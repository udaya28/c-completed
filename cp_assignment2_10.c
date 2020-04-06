/*10.)Write a program in C to get the largest
 element of an array using the function.
  Test Data : 
Input the number of elements to be stored in the array :5
Input 5 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5 
Expected Output :
The largest element in the array is : 5
*/
#include<stdio.h>

void swap_of_two_numbers( int *number1,int *number2 );
void  max_and_min_of_array( int array[] ,int length );

void main()
{
    int length, i ;
    printf( "Input the number of elements to be stored in the array :" );
    scanf( "%d" , &length );
    int array[length];
    for( i=0; i < length; i++)
    {
        printf( "element - %d : " , i ); 
        scanf(" %d ", &array[i]); 
    }
    max_and_min_of_array( array , length );
}

//this function input an array 
//this function print the maximum of array
void  max_and_min_of_array( int array[] ,int length)
{
    int i, j, start, temp;
    for( i=0; i<length-1; i++)
    {
        start = i;
        for( j = i ; j<length; j++)
        {
            if(array[i] > array[j+1])
            {
                swap_of_two_numbers( &array[i], &array[j+1] );
                break;
            }
        }
    }
    printf( "\nThe largest element in the array is : %d" , array[length-1] );
}

// this functions swaps the number by using call by reference
void swap_of_two_numbers( int *number1 , int *number2 )
{
    int temp;
    temp = *number1 ;
    *number1 = *number2 ;
    *number2 = temp ;
}
