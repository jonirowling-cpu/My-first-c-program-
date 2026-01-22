#include<stdio.h>
int main(){
int i,n;
long long fact=1;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;}
printf("factorial of %d is %lld",n,fact);
return 0;}