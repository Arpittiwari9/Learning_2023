#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
typedef struct
{
   int rollNo;
   char name[50];
   int age;
} Student;

// Function definition
void getStudentDetails(Student *student)
{
   printf("Enter Roll Number: ");
   scanf("%d", &(student->rollNo));

   printf("Enter Name: ");
   scanf(" %[^\n]s", student->name);

   printf("Enter Age: ");
   scanf("%d", &(student->age));
}

// Function definition
void modifyStudentDetails(Student *student)
{
   printf("Enter Modified Name: ");
   scanf(" %[^\n]s", student->name);

   printf("Enter Modified Age: ");
   scanf("%d", &(student->age));
}

// Function definition
void printStudentDetails(const Student *student)
{
   printf("Roll Number: %d\n", student->rollNo);
   printf("Name: %s\n", student->name);
   printf("Age: %d\n", student->age);
   printf("\n");
}

int main()
{
   int numStudents;

   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &numStudents);

   // Allocate memory for the array of students
   Student *students = (Student *)malloc(numStudents * sizeof(Student));

   // Readb user input
   for (int i = 0; i < numStudents; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      getStudentDetails(&students[i]);
   }

   // Modify details for a specific student
   int studentIndex;
   printf("Enter the index of the student to modify (0 to %d): ", numStudents - 1);
   scanf("%d", &studentIndex);

   if (studentIndex >= 0 && studentIndex < numStudents)
   {
      printf("\nModifying Student %d:\n", studentIndex + 1);
      modifyStudentDetails(&students[studentIndex]);
   }
   else
   {
      printf("Invalid student index entered.\n");
   }

   // Print the final modified student details
   printf("\nFinal Modified Student Details:\n");
   for (int i = 0; i < numStudents; i++)
   {
      printf("Student %d:\n", i + 1);
      printStudentDetails(&students[i]);
   }

   free(students);

   return 0;
}
