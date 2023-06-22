#include <stdio.h>

int isVowel(char ch)
{
   switch (ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
      return 1; // Vowel
   default:
      return 0; // Not a vowel
   }
}

int main()
{
   char character;
   printf("Enter a character: ");
   scanf("%c", &character);

   int result = isVowel(character);

   if (result == 1)
   {
      printf("Vowel\n");
   }
   else
   {
      printf("Not Vowel\n");
   }

   return 0;
}