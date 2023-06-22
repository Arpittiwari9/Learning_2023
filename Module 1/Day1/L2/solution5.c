#include <stdio.h>

int findCharacterType(char c)
{
   if (c >= 'A' && c <= 'Z')
   {
      return 1;
   }
   else if (c >= 'a' && c <= 'z')
   {
      return 2;
   }
   else if (c >= '0' && c <= '9')
   {
      return 3;
   }
   else if (c >= 32 && c <= 126)
   {
      return 4;
   }
   else
   {
      return 5;
   }
}

int main()
{
   char input;

   printf("Enter a character: ");
   scanf("%c", &input);

   int type = findCharacterType(input);

   switch (type)
   {
   case 1:
      printf("Character type: Uppercase letter (A-Z)\n");
      break;
   case 2:
      printf("Character type: Lowercase letter (a-z)\n");
      break;
   case 3:
      printf("Character type: Digit\n");
      break;
   case 4:
      printf("Character type: Printable symbol\n");
      break;
   case 5:
      printf("Character type: Non-printable symbol\n");
      break;
   default:
      printf("Invalid character\n");
      break;
   }

   return 0;
}