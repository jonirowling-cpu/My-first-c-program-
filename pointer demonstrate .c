#include<stdio.h>
int main(){
int arr[5]={10,29,30,40,50};
int*ptr=arr;
for(int i=0;i<5;i++){
printf("value=%d\n adress=%p\n",*ptr,ptr);
ptr++;}
return 0;}