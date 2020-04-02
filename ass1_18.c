#include <math.h>
#include <stdio.h>
int convert(long n);
long convertb(int n);
int main() {
    long n1,n2,r1,r2;
    int m1,m2,sum,product;
    printf("\nEnter the first binary number: ");
    scanf("%ld", &n1);
    printf("\nEnter the second binary number: ");
    scanf("%ld", &n2);
    m1=convert(n1);
    m2=convert(n2);
    sum=m1+m2;
    product=m1*m2;
    r1=convertb(sum);
    r2=convertb(product);
    printf("\nsum is %ld",r1);
    printf("\nproduct is %ld",r2);
    return 0;
}

int convert(long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
long convertb(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
