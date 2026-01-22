#include <stdio.h>
void reverse(char s[]){
if(*s=='\0')
return;
reverse (s+1);
printf("%c",*s);}
int main(){
char s[100];
printf("enter string:");
gets(s);
reverse(s);
return 0;
}
    