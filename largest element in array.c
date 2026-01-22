#include <stdio.h>

int main() {
    int a[50],n,i,largest;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);}
    largest =a[0];
    for(i=1;i<n;i++){
    if(a[i]>largest){
    largest =a[i];}
    }
    printf("largest=%d",largest);
    return 0 ;}