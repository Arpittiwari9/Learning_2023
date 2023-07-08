#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
struct Student
{
   char name[100];
   int marks;
};

// Function definition
void print_above_below_average(struct Student students[], int count, float avg_marks)
{
   printf("Students above average marks:\n");
   for (int i = 0; i < count; i++)
   {
      if (students[i].marks > avg_marks)
      {
         printf("%s - %d\n", students[i].name, students[i].marks);
      }
   }

   printf("Students below average marks:\n");
   for (int i = 0; i < count; i++)
   {
      if (students[i].marks < avg_marks)
      {
         printf("%s - %d\n", students[i].name, students[i].marks);
      }
   }
}

// Function definition
float compute_average(struct Student students[], int count)
{
   int total_marks = 0;
   for (int i = 0; i < count; i++)
   {
      total_marks += students[i].marks;
   }
   return (float)total_marks / count;
}

int main()
{
   int num_students;
   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &num_students);

   struct Student *students = malloc(num_students * sizeof(struct Student));

   // Read user data
   for (int i = 0; i < num_students; i++)
   {
      printf("Enter the name of student %d: ", i + 1);
      scanf(" %[^\n]", students[i].name);

      printf("Enter the marks of student %d: ", i + 1);
      scanf("%d", &students[i].marks);
   }

   // Function call to compute average marks
   float avg_marks = compute_average(students, num_students);
   printf("Average Marks: %.2f\n", avg_marks);

   // Function call to print the results
   print_above_below_average(students, num_students, avg_marks);

   free(students);

   return 0;
}