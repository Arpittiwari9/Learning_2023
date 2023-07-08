#include <stdio.h>
#include <math.h>
#include <string.h>

int binaryToDecimal(long long binary)
{
   int decimal = 0;
   int base = 1;

   while (binary > 0)
   {
      int lastDigit = binary % 10;
      binary = binary / 10;
      decimal += lastDigit * base;
      base *= 2;
   }

   return decimal;
}

int octalToDecimal(int octal)
{
   int decimal = 0;
   int base = 0;

   while (octal > 0)
   {
      int lastDigit = octal % 10;
      octal = octal / 10;
      decimal += lastDigit * pow(8, base);
      base++;
   }

   return decimal;
}

int hexadecimalToDecimal(char hexadecimal[])
{
   int decimal = 0;
   int length = strlen(hexadecimal);
   int base = 1;

   for (int i = length - 1; i >= 0; i--)
   {
      if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
      {
         decimal += (hexadecimal[i] - '0') * base;
      }
      else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
      {
         decimal += (hexadecimal[i] - 'A' + 10) * base;
      }
      base *= 16;
   }

   return decimal;
}

int main()
{
   int choice;
   long long binary;
   int octal;
   char hexadecimal[20];

   printf("Number Conversion Menu:\n");
   printf("1. Binary to Decimal\n");
   printf("2. Octal to Decimal\n");
   printf("3. Hexadecimal to Decimal\n");
   printf("Enter your choice (1-3): ");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      printf("Enter a binary number: ");
      scanf("%lld", &binary);
      printf("Decimal: %d\n", binaryToDecimal(binary));
      break;

   case 2:
      printf("Enter an octal number: ");
      scanf("%d", &octal);
      printf("Decimal: %d\n", octalToDecimal(octal));
      break;

   case 3:
      printf("Enter a hexadecimal number: ");
      scanf("%s", hexadecimal);
      printf("Decimal: %d\n", hexadecimalToDecimal(hexadecimal));
      break;

   default:
      printf("Invalid choice!\n");
      break;
   }

   return 0;
}