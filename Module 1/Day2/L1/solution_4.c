#include <stdio.h>
#include <stdlib.h>

int countSetBits(int num)
{
   int count = 0;

   while (num != 0)
   {
      count += num & 1; // Add the rightmost bit to the count if it's set
      num >>= 1;        // Right shift the number by 1 bit
   }

   return count;
}

int main()
{
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   unsigned int *a = (unsigned int *)malloc(size * sizeof(unsigned int));

   if (a == NULL)
   {
      printf("Memory allocation failed. Exiting the program.\n");
      return 1;
   }

   printf("Enter the elements of the array in hexadecimal format:\n");

   for (int i = 0; i < size; i++)
   {
      printf("Hexadecimal Element %d: ", i + 1);
      scanf("%x", &a[i]);
   }

   int totalBits = 0;

   for (int i = 0; i < size; i++)
   {
      totalBits += countSetBits(a[i]);
   }

   printf("Total number of set bits: %d\n", totalBits);

   free(a);

   return 0;
}