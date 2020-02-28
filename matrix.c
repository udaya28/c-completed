#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,c1,c2,i,j,c,k,sum,sum1;
    printf("Enter 1 for addition \nEnter 2 for subtraction \nEnter 3 for transverse \nEnter 4 for multiplication ");
    scanf("%d",&c);
    printf("Enter the row of first matrix: ");
    scanf("%d",&r1);
    printf("Enter the column of first matrix : ");
    scanf("%d",&c1);
    printf("Enter the row of second matrix : ");
    scanf("%d",&r2);
    printf("Enter the column of second matrix : ");
    scanf("%d",&c2);
    int a[r1][r2],b[r1][r2];
    printf("Enter the %d elements in first array :\n",c1*c2);
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("Enter the %d elements in second array :\n",c2*r2);
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    switch(c)
    {
    case 1:
        {
            int c[r1][c1];
            if(r1==r2 && c1==c2)
            {
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                    }
                }
            printf("\nThe addition is :");
            for(i=0;i<r1;i++)
            {
                printf("\n");
                for(j=0;j<c1;j++)
                    {
                        printf("%d ",c[i][j]);
                    }
            }
            }
            else
            {
                printf("Invalid input");
            }
        }

   case 2:
        {
            int c[r1][c1];
            if(r1==r2 && c1==c2)
            {
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        c[i][j]=a[i][j]-b[i][j];
                    }
                }
            printf("\nThe subtraction is :");
            for(i=0;i<r1;i++)
            {
                printf("\n");
                for(j=0;j<c1;j++)
                    {
                        printf("%d ",c[i][j]);
                    }
            }
            }
            else
            {
                printf("Invalid input");
            }
        }
   case 3:
    {
        int c[c1][r1];
        for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        c[j][i]=a[i][j];
                    }
                }
        printf("Transverse of first matrix is :");
         for(i=0;i<r1;i++)
            {
                printf("\n");
                for(j=0;j<c1;j++)
                    {
                        printf("%d ",c[i][j]);
                    }
            }

    }
   case 4:
    {
        if(c1==r2)
        {
            int c[r1][c2];
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    sum=0;
                    for(k=0;k<2;k++)
                    {
                        sum1=a[i][j+k]*b[i+k][j];
                        sum=sum+sum1;
                    }
                    c[i][j]=sum;
                }
            }
             for(i=0;i<r1;i++)
            {
                printf("\n");
                for(j=0;j<c1;j++)
                    {
                        printf("%d ",c[i][j]);
                    }
            }
        }
        else
        {
            printf("Invalid input ");
        }

    }


    }


    return 0;
}

