#include<stdio.h>
int main(){
FILE* fptr;
char ch;
int chars=0,words=0,lines=0;
fptr=fopen("sample.txt", "r");
if(fptr==NULL){
printf("error in file");
return 1;}
while((ch=fgetc(fptr))!=EOF){
chars++;
if(ch==' '|| ch=='\n')
words++;
if(ch=='\n')
lines++;
}
fclose(fptr);
printf("character=%d\nwords=%d\nlines=%d\n",chars,words,lines);
return 0;
}