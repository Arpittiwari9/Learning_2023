#include <stdio.h>
#include <math.h>

// Structure
struct Point
{
   float x;
   float y;
};

// Function definition
float calculateDistance(struct Point p1, struct Point p2)
{
   float distance;
   distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
   return distance;
}

int main()
{
   struct Point p1, p2;

   // Read user data
   printf("Enter coordinates for Point 1 (x y): ");
   scanf("%f %f", &p1.x, &p1.y);

   printf("Enter coordinates for Point 2 (x y): ");
   scanf("%f %f", &p2.x, &p2.y);

   // Function call
   float distance = calculateDistance(p1, p2);

   // Print the result
   printf("The distance between the two points is: %.2f\n", distance);

   return 0;
}
