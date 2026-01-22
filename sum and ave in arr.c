#include<stdio.h>
int main(){
int n,i;
float sum=0,ave;
printf("enter number of elements");
scanf("%d",&n);
float arr[n];
printf("enter %d elements",n);
for(i=0;i<n;i++){
scanf("%f",&arr[i]);
sum+=arr[i];}
ave=sum/n;
printf("sum=%2f\n average=%2f",sum,ave);
return 0;}