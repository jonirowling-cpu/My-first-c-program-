#include<stdio.h>
int main(){
int choice;
float a,b;
printf("1.addition\n2.subraction\n3.multiplycation\n4.division\n");
printf("enter your choice");
scanf("%d",&choice);
printf("enter two numbers");
scanf("%f %f",&a,&b);
switch (choice){
case 1:printf("result=%2f\n",a+b);break;
case 2:printf("result=%2f\n",a-b);break;
case 3:printf("result=%2f\n",a*b);break;
case 4:if(b!=0) printf("result=%2f\n",a/b);
        else printf("division by zero!");break;
default:printf("invalid choice");}
return 0;}