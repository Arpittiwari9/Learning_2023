#include <stdio.h>

int main()
{
   int rollNo;
   char name[100];
   float physicsMarks, mathMarks, chemistryMarks;
   float totalMarks, percentage;

   printf("Enter your Roll No: ");
   scanf("%d", &rollNo);

   printf("Enter your Name (including initials): ");
   scanf(" %[^\n]", name);

   printf("Enter your Marks in Physics: ");
   scanf("%f", &physicsMarks);

   printf("Enter your Marks in Math: ");
   scanf("%f", &mathMarks);

   printf("Enter your Marks in Chemistry: ");
   scanf("%f", &chemistryMarks);

   totalMarks = physicsMarks + mathMarks + chemistryMarks;
   percentage = (totalMarks / 300.0) * 100;

   printf("\n\nSummary\n");
   printf("--------\n");
   printf("Roll No: %d\n", rollNo);
   printf("Name: %s\n", name);

   printf("Physics Marks: %.2f\n", physicsMarks);
   printf("Math Marks: %.2f\n", mathMarks);
   printf("Chemistry Marks: %.2f\n", chemistryMarks);

   printf("Total Marks: %.2f\n", totalMarks);
   printf("Percentage: %.2f%%\n", percentage);

   return 0;
}