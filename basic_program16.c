// TO CHECK A VOWEL
#include<stdio.h>
void main(){
char ch;
printf("Enter a Vowel to check is it Right or wrong\n ");
printf("Write in a small Letter\n");
printf("Enter ch: ");
scanf("%c",&ch);
switch (ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("yes it's a vowel");
    break;

default:
printf("Not Vowel");

    break;
}
}