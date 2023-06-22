#include <stdio.h>
#include <stdlib.h>

void smallestlargestDigits(int n, int *nums)
{
   int i, j;
   int smallestDigit = 9;
   int largestDigit = 0;
   int currentDigit;

   for (i = 0; i < n; i++)
   {
      int num = nums[i];

      while (num > 0)
      {
         currentDigit = num % 10;

         if (currentDigit < smallestDigit)
         {
            smallestDigit = currentDigit;
         }
         if (currentDigit > largestDigit)
         {
            largestDigit = currentDigit;
         }

         num /= 10;
      }
   }

   if (smallestDigit == 9 && largestDigit == 0)
   {
      printf("Not Valid\n"); // give negative ingeter as input
   }
   else
   {
      printf("Smallest Digit: %d\n", smallestDigit);
      printf("Largest Digit: %d\n", largestDigit);
   }
}

int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   int *nums = (int *)malloc(n * sizeof(int));
   if (nums == NULL)
   {
      printf("Memory allocation failed.\n");
      return 1;
   }

   int i;
   printf("Enter %d numbers:\n", n);
   for (i = 0; i < n; i++)
   {
      printf("n%d: ", i + 1);
      scanf("%d", &nums[i]);
   }

   smallestlargestDigits(n, nums);
   free(nums);

   return 0;
}