#include <stdio.h>

int main()
{
   int arr[100];
   int len, i, sum = 0;
   float avg;

   printf("Enter the length of the array: ");
   scanf("%d", &len);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < len; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &arr[i]);
      sum += arr[i];
   }

   avg = (float)sum / len;

   printf("Sum: %d\n", sum);
   printf("Average: %.2f\n", avg);

   return 0;
}