/*
Task 1
Assume User will be providing input in the form of a string as show below.
Write a function to parse the string and initialize an array of structures.

Example String : "1001 Aron 100.00"
Example Structure :
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition
struct Student
{
   int rollno;
   char name[20];
   float marks;
};

// Function for Paese string
void parseString(const char *input, struct Student *student)
{
   const char *delimiter = " ";
   char *token;

   char *inputCopy = strdup(input);
   token = strtok(inputCopy, delimiter);

   if (token != NULL)
   {
      student->rollno = atoi(token);

      token = strtok(NULL, delimiter);
      strncpy(student->name, token, sizeof(student->name) - 1);
      student->name[sizeof(student->name) - 1] = '\0';

      token = strtok(NULL, delimiter);
      student->marks = atof(token);
   }

   free(inputCopy);
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

   char input[100];
   for (int i = 0; i < size; i++)
   {
      // Read user data
      printf("Enter student %d details (rollno name marks): ", i + 1);
      fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';

      parseString(input, &students[i]);
   }

   // Print the result
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.2f\n\n", students[i].marks);
   }

   free(students);

   return 0;
}


/*

Sample output

Enter the number of students: 2
Enter student 1 details (rollno name marks):
1001 Karthik 81
Enter student 2 details (rollno name marks):
1002 xyz 99

Student 1:
Roll No: 1001
Name: Karthik
Marks: 81.00

Student 2:
Roll No: 1002
Name: xyz
Marks: 99.00

*/