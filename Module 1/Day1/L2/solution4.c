#include <stdio.h>

int bit_operations(int num, int oper_type, int pos)
{
   if (oper_type == 1)
   {
      // Set 2 bits
      int mask = (1 << 2) - 1;
      mask = mask << pos;
      return num | mask;
   }
   else if (oper_type == 2)
   {
      // Clear 3 bits
      int mask = (1 << 3) - 1;
      mask = mask << pos;
      mask = ~mask;
      return num & mask;
   }
   else if (oper_type == 3)
   {
      // Toggle MSB
      int mask = 1 << 31; 
      return num ^ mask;
   }
   else
   {
      printf("Invalid operation type\n");
      return num;
   }
}

int main()
{
   int num, oper_type, pos;
   printf("Enter the number: ");
   scanf("%d", &num);
   printf("Enter the operation type (1, 2, or 3): ");
   scanf("%d", &oper_type);
   printf("Enter the position: ");
   scanf("%d", &pos);

   int result = bit_operations(num, oper_type, pos);
   printf("Result: %d\n", result);

   return 0;
}