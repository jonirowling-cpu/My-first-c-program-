#include<stdio.h>
int main(){
char str[100];
int i,len=0;
printf("enter a string");
gets(str);
while(str[len]!='\0')
len++;
printf("reversd string");
for(i=len-1;i>=0;i--)
printf("%c",str[i]);
printf("\n");
return 0;}