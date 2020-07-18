#include<stdio.h>
int main()
{

   char ch;
   printf("Enter an alphabet\n");

   scanf("%c", &ch);

  /* if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'||ch == 'u')

       printf("The alphabet is Vowel");

  else
    printf("The alphabet is consonant");*/

    switch(ch)
  {
  case 'a':
    printf("Vowel");
    break;
  case 'e':
    printf("Vowel");
    break;
  case 'i':
    printf("Vowel");
    break;
  case 'o':
    printf("Vowel");
    break;
  case 'u':
    printf("Vowel");
  default:
    printf("Consonant");
  }


}
