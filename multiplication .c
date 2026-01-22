#include<stdio.h>
int main(){
int n,i,mul;
printf("enter a number:");
scanf("%d",&n);
printf("multiplication taple of %d\n",n);
for(i=1;i<=10;i++){
mul=n*i;
printf("number%d=%d\n",i,mul);}
return 0 ;}