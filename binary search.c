#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,mid,b,e,l,flag=0,index,size;
    //int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the number of elements :");
    scanf("%d",&size);
    int a[size];
    printf("enter the array");
    for(s=0;s<size;s++){
        scanf("%d",&a[s]);
    }
    l=sizeof(a)/sizeof(a[0]);
    printf("Enter the number to be checked : ");
    scanf("%d",&n);
    mid=l/2;
    if(a[mid]==n)
    {
       flag=1;
       index=mid-1;
    }else if(a[mid]<n)
    {
        b=mid;
        e=l;
    }else{
        b=0;
        e=mid;
    }
    for(;b<e;b++){
        if(a[b]==n){
            flag=1;
            index=b;
            break;
        }
    }
    if(flag==1){
        printf("yes");
        printf("\nindex = %d",index);
    }else{
        printf("no");
    }  b=0;
        e=mid;
    return 0;


}

