#include <stdio.h>

void bits(unsigned int num)
{
   int i;
   int number = sizeof(num) * 8;

   for (i = number - 1; i >= 0; i--)
   {
      unsigned int mask = 1u << i;

      if (num & mask)
      {
         printf("1");
      }
      else
      {
         printf("0");
      }

      if (i % 8 == 0)
      {
         printf(" ");
      }
   }

   printf("\n");
}

int main()
{
   unsigned int num;
   printf("Enter a 32-bit integer: ");
   scanf("%u", &num);
   bits(num);
   return 0;
}