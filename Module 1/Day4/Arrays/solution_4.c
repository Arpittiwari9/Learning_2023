#include <stdio.h>

int main()
{
   int size, i;
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   int arr[size];
   printf("Enter the elements of the array:\n");
   for (i = 0; i < size; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &arr[i]);
   }

   int sumEven = 0;
   int sumOdd = 0;

   for (i = 0; i < size; i++)
   {
      if (arr[i] % 2 == 0)
      {
         sumEven += arr[i];
      }
      else
      {
         sumOdd += arr[i];
      }
   }

   printf("Sum of even elements: %d\n", sumEven);
   printf("Sum of odd elements: %d\n", sumOdd);

   return 0;
}