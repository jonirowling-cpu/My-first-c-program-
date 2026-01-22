#include <stdio.h>
int main(){
int i,low,high,prime,num;
printf("enter low range:\n");
scanf("%d",&low);
printf("enter high range:\n");
scanf("%d",&high);
printf("prime numbers from given range:\n");
for(num=low;num<=high;num++){
if(num<2)
continue;
prime=1;
for(i=2;i<num/2;i++){
if(num%i==0){
prime=0;
break;}
}

if(prime==1)
printf("prime=%d",num);
}
return 0;
}