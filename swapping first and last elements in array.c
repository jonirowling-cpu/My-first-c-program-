#include <stdio.h>

int main() {
    int a[50],n,i,temp;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    }
    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    printf("after swapping :\n");
    for(i=0;i<n;i++)
   { printf("%d",a[i]);}
    return 0 ;}