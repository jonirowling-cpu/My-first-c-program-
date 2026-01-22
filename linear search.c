#include <stdio.h>

int main() {
int a[50];
    int i,key,n,found=0;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    printf("enter key element to search:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
    if(a[i]==key){
    found=1;
    break;}
    }
    if(found==1)
    printf("element found at position %d",i+1);
    else
    printf("element not found");
    return 0;}