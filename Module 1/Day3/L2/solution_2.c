#include <stdio.h>

#define DEC_TO_BCD(num) (((num / 10) << 4) | (num % 10))

void decimalToBCD(int decimal, int *bcdHigh, int *bcdLow)
{
   *bcdHigh = DEC_TO_BCD(decimal / 100);
   *bcdLow = DEC_TO_BCD(decimal % 100);
}

int main()
{
   int decimalNumber;
   printf("Enter a decimal number: ");
   scanf("%d", &decimalNumber);

   int bcdHigh, bcdLow;
   decimalToBCD(decimalNumber, &bcdHigh, &bcdLow);
   printf("Decimal: %d\nBCD High: %02X\nBCD Low: %02X\n", decimalNumber, bcdHigh, bcdLow);

   return 0;
}