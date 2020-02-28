#include <stdio.h>
int indexsum(int input1[], int n, int option)
{
    int i=0,j=0,k=0;
    int sum=0;
    int flag;
    int indexpr[10];
    int non[10];
    int l=0;
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                non[l]=input1[i];
                l++;
                break;
            }
        }
        if(flag)
        {
           indexpr[k]=input1[i];
           k++;
        }
    }
    switch(option)
    {
        case 2: printf("sum of elements of prime index");
                for(i=0;i<k;i++)
                 sum = sum+indexpr[i];
                break;
        case 4: printf("sum of elements of non-prime index");
                for(i=0;i<l;i++)
                  sum= sum+non[i];
                break;
    }
    return sum;
}
int primesum(int input1[], int n, int option)
{
   int i=0,j=0,k=0;
   int sum=0;
   int flag;
   int prime[10];
   for(i=0;i<n;i++)
    {
        flag=1;
        for(j=2;j<input1[i];j++)
        {
            if(input1[i]%j==0)
            {
              //printf(".....%d",input1[i]);
              flag=0;
              break;
             }
        }
        if(flag)
        {
          prime[k]=input1[i];
          //sum= sum+prime[k];
          k++;
        }
    }
   switch(option)
   {
       case 1: printf("sum of prime numbers in the given input array...");
               for(i=0;i<k;i++)
               sum= sum+prime[i];
               break;
        case 3: 
               printf("Sum of prime numbers excluding the largest prime");
               for(i=0;i<k;i++)
               {
                   for(j=i;j<k;j++)
                   {
                       if(prime[i]>prime[j])
                       {
                           int temp= prime[i];
                           prime[i]=prime[j];
                           prime[j] = temp;
                       }
                   }
               }
               for(i=0;i<k-1;i++)
               {
                   sum= sum+prime[i];
               }
               break;
    }
   return sum;
}
int main()
{
   int input1[10];
   int sum=0;
   int n,i,j,k=0;
   //int flag=1;
   int option;
   printf("Enter the size of array");
   scanf("%d",&n);
   printf("\n Enter the elements of the array");
   for(i=0;i<n;i++)
   {
       scanf("%d",&input1[i]);
   }
   printf("\n enter the option to sum the prime numbers");
   scanf("%d",&option);
   if(option==1 || option==3)
   {
      sum = primesum(input1,n,option);
   }
   else if(option==2 || option==4)
   {
       sum= indexsum(input1,n,option);
   }
   else
   {
       printf("You have entered wrong option");
   }
   printf("the sum is.... %d",sum);
    return 0;
}
