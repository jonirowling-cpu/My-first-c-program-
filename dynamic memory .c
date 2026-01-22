#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*arr,sum=0;
printf("enter number of elements");
scanf("%d",&n);
arr=(int*)malloc(n* sizeof(int));
printf("enter %d elments",n);
for (i=0;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum=%d",sum);
free(arr);
return 0;}