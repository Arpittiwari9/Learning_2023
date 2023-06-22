#include <stdio.h>

// set
unsigned char setBit(unsigned char num, int position)
{
   return (num | (1 << position));
}

// clear
unsigned char clearBit(unsigned char num, int position)
{
   return (num & ~(1 << position));
}

// toggle
unsigned char toggleBit(unsigned char num, int position)
{
   return (num ^ (1 << position));
}

int main()
{
   unsigned char num;
   int position;

   printf("Enter an 8-bit number in hexadecimal (e.g., 0x2A): ");
   scanf("%hhx", &num);

   printf("Enter the bit position (0-7) to set/clear/toggle: ");
   scanf("%d", &position);

   // Set
   unsigned char setResult = setBit(num, position);
   printf("Set bit result: 0x%02X\n", setResult);

   // Clear
   unsigned char clearResult = clearBit(num, position);
   printf("Clear bit result: 0x%02X\n", clearResult);

   // Toggle
   unsigned char toggleResult = toggleBit(num, position);
   printf("Toggle bit result: 0x%02X\n", toggleResult);

   return 0;
}