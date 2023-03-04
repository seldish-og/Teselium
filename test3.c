#include <stdio.h>
int main()
{
  float Pi=3.14, area, circumference, radius;

  //Ask user to enter the radius of circle
  printf("Enter radius of circle: ");
  //Storing the user input into variable circle_radius
  scanf("%f",&radius);

  //Calculate and print the Area of circle
  area = Pi * radius * radius;
  printf("Area of circle is: %f\n",area);

  //Calculate and print the Circumference of circle
  circumference = 2 * Pi * radius;
  printf("Circumference of circle is: %f",circumference);

  return 0;
}
