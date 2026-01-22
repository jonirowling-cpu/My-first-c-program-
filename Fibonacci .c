#include<stdio.h>
int main(){
int a=0,b=1,low,high,c;
printf("enter lower limit:");
scanf("%d",&low);
printf("uper limit",high);
scanf("%d",&high);
while(a<=high){
if(a>=low)
{printf("%d\n",a);}
c=a+b;
a=b;
b=c;
}
return 0;
}