#include<stdio.h>
int GCD(int a,b){
if(b==0)
return a;
else 
return GCD(b,a%b);}
int main(){
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("GCD=%d",GCD(a,b));
return 0;}
