/*
Task 3 
Write a function to display all members in the above array of structures
Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

*/

#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Student
{
   int rollno;
   char name[20];
   float marks;
};

// Function to display all members in the array of structures
void displayStudents(const struct Student *students, int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.2f\n\n", students[i].marks);
   }
}

int main()
{
   // Local Variable declaration
   int size;

   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &size);
   getchar();

   struct Student *students = malloc(size * sizeof(struct Student));

   // Read the details of each student
   for (int i = 0; i < size; i++)
   {
      printf("Enter student %d details (rollno name marks): ", i + 1);
      scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
      getchar();
   }

   // Display the details of all students
   displayStudents(students, size);

   free(students);

   return 0;
}


/*

Sample output

Enter the number of students: 3
Enter student 1 details (rollno name marks): 1001 abc 99
Enter student 2 details (rollno name marks): 1002 def 85
Enter student 3 details (rollno name marks): 1003 xyz 79

Student 1:
Roll No: 1001
Name: abc
Marks: 99.00


Student 2:
Roll No: 1002
Name: def
Marks: 85.00


Student 3:
Roll No: 1003
Name: xyz
Marks: 79.00

*/