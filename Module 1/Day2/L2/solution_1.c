#include <stdio.h>
#include <stdlib.h>

void swapAlternate(int arr[], int size)
{
   int i;
   for (i = 0; i < size - 1; i += 2)
   {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
   }
}

int main()
{
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   int *arr = (int *)malloc(size * sizeof(int));
   if (arr == NULL)
   {
      printf("Memory allocation failed.\n");
      return 1;
   }

   printf("Enter the elements of the array:\n");
   for (int i = 0; i < size; i++)
   {
      printf("Element %d: ", i + 1);
      scanf("%x", &arr[i]);
   }

   printf("Original array: ");
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }

   swapAlternate(arr, size);

   printf("\nSwapped array: ");
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }

   free(arr);

   return 0;
}