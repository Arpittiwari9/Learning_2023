#include <stdio.h>

void decreasing(int n)
{
   for (int i = n; i >= 1; i--)
   {
      printf("%d", i);
   }
}

void spaces(int n)
{
   for (int i = 1; i <= n; i++)
   {
      printf(" ");
   }
}

void increasing(int n)
{
   for (int i = 1; i <= n; i++)
   {
      printf("%d", i);
   }
}

int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (int i = n; i >= 1; i--)
   {
      increasing(i);
      spaces((n - i) * 2);
      decreasing(i);
      printf("\n");
   }

   return 0;
}