/*8.)Write a program in C to check whether two given 
strings are an anagram. 
Test Data :
Input the first String : spare 
Input the second String : pears 
Expected Output :
spare and pears are Anagram.
*/
#include<stdio.h>
#include<string.h>
int length_of( char string[] );
void main()
{
    int result = 0, length1 , length2 , i , j;
    char string_one[25];
    char string_two[25];
    printf( "Enter the first string : " );
    gets( string_one );
    printf( "Enter the second string : " );
    gets( string_two );
    length1 = strlen( string_one );
    length2 = strlen( string_two );
    if( length1 == length2 )
    {
        for ( i=0 , j=length1-1 ; i<length1; i++ , j-- )
        { 
            if( string_one[i] == string_two[j] ){
                continue;
            }
            else
            {
                break;
            }
        }
        if( i == length1 ){
            result = 1;
        }
    }
    if( result == 0 )
    {
        printf( "The two strings are not Anagram." );
    }
    else
    {
        printf( "The two strings are Anagram." );
    }
}
