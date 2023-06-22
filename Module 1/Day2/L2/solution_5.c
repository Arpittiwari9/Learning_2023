#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char *str)
{
   int len = strlen(str);
   for (int i = 0; i < len; i++)
   {
      str[i] = str[i] + 5;
   }
}

void decode(char *str)
{
   int len = strlen(str);
   for (int i = 0; i < len; i++)
   {
      str[i] = str[i] - 5;
   }
}

int main()
{
   char input[100];

   printf("Enter a string: ");
   fgets(input, sizeof(input), stdin);
   input[strcspn(input, "\n")] = '\0';

   encode(input);
   printf("Encoded string: %s\n", input);

   decode(input);
   printf("Decoded string: %s\n", input);

   return 0;
}