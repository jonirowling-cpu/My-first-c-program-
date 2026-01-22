#include <stdio.h>

int main() {
    int a[50],n,i,sum=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0 ;}