#include <stdio.h>

int main()
{
   int arr[100];
   int len, i, min, max;

   printf("Enter the length of the array: ");
   scanf("%d", &len);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < len; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &arr[i]);
   }

   min = arr[0];
   max = arr[0];

   for (i = 1; i < len; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
      }
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }

   printf("Minimum: %d\n", min);
   printf("Maximum: %d\n", max);

   return 0;
}