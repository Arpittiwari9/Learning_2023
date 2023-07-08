#include <stdio.h>

void printArray(int arr[], int len)
{
   for (int i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main()
{
   int arr[100];
   int len, i, temp, start, end;

   printf("Enter the length of the array: ");
   scanf("%d", &len);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < len; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &arr[i]);
   }

   printf("Original array: ");
   printArray(arr, len);

   start = 0;
   end = len - 1;
   while (start < end)
   {

      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;

      printf("Reversed array: ");
      printArray(arr, len);

      start++;
      end--;
   }

   return 0;
}