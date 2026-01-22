#include<stdio.h>
int main(){
int rem,rev=0,temp,n;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;}
if(rev==temp)
printf("%d is palindrome",temp);
else
printf("%d not palindrome",temp);
return 0;}