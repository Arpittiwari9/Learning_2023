#include <stdio.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t size)
{
   char* temp = malloc(size * sizeof(char));

   char *ptr_a = (char *)a;
   char *ptr_b = (char *)b;
   for (size_t i = 0; i < size; i++)
   {
      temp[i] = ptr_a[i];
   }

   for (size_t i = 0; i < size; i++)
   {
      ptr_a[i] = ptr_b[i];
   }

   for (size_t i = 0; i < size; i++)
   {
      ptr_b[i] = temp[i];
   }

   free(temp);
}

int main()
{
   int num1, num2;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

   swap(&num1, &num2, sizeof(int));

   printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

   return 0;
}