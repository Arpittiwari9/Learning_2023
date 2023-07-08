#include <stdio.h>

int isLeapYear(int year)
{
   if (year % 400 == 0)
      return 1;
   if (year % 100 == 0)
      return 0;
   if (year % 4 == 0)
      return 1;
   return 0;
}

int calculateDays(int day, int month, int year)
{
   int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int totalDays = day;

   for (int i = 0; i < month - 1; i++)
   {
      totalDays += daysInMonth[i];
   }

   if (month > 2 && isLeapYear(year))
   {
      totalDays += 1;
   }

   return totalDays;
}

int main()
{
   int day, month, year;

   printf("Enter the date (dd mm yy): ");
   scanf("%d %d %d", &day, &month, &year);

   int elapsedDays = calculateDays(day, month, year);

   printf("Number of days elapsed: %d\n", elapsedDays);

   return 0;
}