#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str)
{
   while (*str)
   {
      if (isupper(*str))
         *str = tolower(*str);
      else if (islower(*str))
         *str = toupper(*str);
      str++;
   }
}

int main()
{
   char str[100];

   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   toggleCase(str);

   printf("Toggled case: %s\n", str);

   return 0;
}