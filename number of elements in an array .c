#include <stdio.h>

int main() {
    int a[50],n,i;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    }
    printf("number of elements in array=%d",n);
    return 0 ;}