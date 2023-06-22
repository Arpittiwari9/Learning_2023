#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b)
{
   const char **nameA = (const char **)a;
   const char **nameB = (const char **)b;
   return strcmp(*nameA, *nameB);
}

int main()
{
   char *names[] = {
       "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"};

   int i;
   int numNames = sizeof(names) / sizeof(names[0]);

   printf("Names before sorting:\n");
   for (i = 0; i < numNames; i++)
   {
      printf("%s\n", names[i]);
   }

   qsort(names, numNames, sizeof(char *), compareNames);

   printf("\nNames after sorting:\n");
   for (i = 0; i < numNames; i++)
   {
      printf("%s\n", names[i]);
   }

   return 0;
}