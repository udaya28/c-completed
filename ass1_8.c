/*8.  Write a program to receive a color code from the user (an Alphabhet). 
The program should then print the color name, based on the color code given.
 The following are the color codes and their corresponding color names.
 R->Red, B->Blue, G->Green, O->Orange, Y->Yellow, W->White.
 If color code provided by the user is not valid then print "Invalid Code". */
#include<conio.h>
void main()
{
  char x;
  printf("Enter your color chode ex: R or B or G or Y or W : ");
  scanf("%c",&x);
  switch(x)
  {
    case 'R': printf("Red");break;
    case 'B': printf("Blue");break;
    case 'G': printf("Green");break;
    case 'O': printf("Orange");break;
    case 'Y': printf("Yellow");break;
    case 'W': printf("White");break;
    default: printf("Invalid Code");
  }
}
