/*6.)Write a program in C to convert decimal 
number to binary number using the function. 
Test Data :
Input any decimal number : 65  
Expected Output :
The Binary value is : 1000001
*/
#include<stdio.h>
int convert_to_binary( int decimal_number );
void main()
{
    int binary_number, decimal_number;
    printf( "Input any decimal number : " );
    scanf( "%d" , &decimal_number);
    binary_number = convert_to_binary( decimal_number );
    printf( "The Binary value is : %d" , binary_number);
}
//this function retuns binary value of a decimal number
int convert_to_binary( int decimal_number )
{
    int binary_number, step = 1,reminder ,i = 1;
    while(decimal_number != 0)
    {
       reminder = decimal_number%2;
       binary_number += reminder * i;
       decimal_number /= 2;
       i *= 10;
       step++;
    }
    return binary_number;
}