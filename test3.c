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
#include <stdio.h>
#include <math.h> //to use sqrt() function
int main()
{
  // Variable area to store calculated area, "temp"
  // variable to store the result of temporary calculation
  // and side represents the side of the triangle
  float side, area, temp;

  // Prompt user to input side of the Equilateral triangle
  printf("Enter the Side of the triangle: ");
  scanf("%f",&side);

  //Calculate and print the area of Equilateral Triangle
  temp = sqrt(3) / 4 ;
  area = temp * side * side ;
  printf("Area of Equilateral Triangle is: %f",area);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
  char ch[1000];
  FILE *fptr;
  if ((fptr = fopen("beginnersbook.txt", "r")) == NULL) {
    printf("Error! File does not exist.");
    // beginnersbook.txt exits if the file pointer returns NULL.
    exit(1);
  }

  // reading text using fscanf() till a new line is
  // encountered and printed the same line using printf()
  fscanf(fptr, "%[^\n]", ch);
  printf("Data from the file:\n%s", ch);
  fclose(fptr);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  char ch[500];

  // File pointer
  FILE *fptr;

  // Open the file beginnersbook.txt in 'w' mode
  // Here 'w' represents the writing mode.
  fptr = fopen("beginnersbook.txt", "w");

  // If fptr is NULL then the file didn't open successfully
  if (fptr == NULL) {
    printf("Error! File cannot be opened");
    //exit the program
    exit(1);
  }
  printf("Enter sentence that you would like to write:\n");
  fgets(ch, sizeof(ch), stdin);
  fprintf(fptr, "%s", ch);
  fclose(fptr);
  return 0;
}
#include <stdio.h>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;
 
  // Print the enum variable
  printf("%d", myVar);
  
  return 0;
}
#include <stdio.h>

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;
  
  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
   
  return 0;
}
#include<stdio.h>
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    // variable declaration
    int i, number;

    // take user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // loop to check number is perfect square or not
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("\n\n\n\t\t\t%d is a perfect square\n\n\n", number);

            printf("\n\n\t\t\tCoding is Fun !\n\n\n");
            return 0;   // same as using break in this case to end the program
        }
    }
    printf("\n\n\n\t\t\t%d is not a perfect square\n", number);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

// function prototype declarations
long factorial(int);
long find_npr(int, int);
long find_ncr(int, int);

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, r;
    long npr, ncr;

    printf("Enter the value of n and r respectively: \n\n");
    scanf("%d%d", &n, &r);

    // function calls
    npr = find_npr(n, r);
    ncr = find_ncr(n, r);

    printf("\n\n\n\t\t%dC%d = %ld\n", n, r, ncr);
    printf("\n\n\t\t%dP%d = %ld\n", n, r, npr);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

/*
    function definition for nCr
*/
long find_ncr(int a, int b)
{
    return (factorial(a)/(factorial(b)*factorial(a-b)));
}

/*
    function definition for nPr
*/
long find_npr(int a, int b)
{
    return (factorial(a)/factorial(a-b));
}

/*
    recursive function definition for finding 
    factorial of a number
*/
long factorial(int c)
{
    if(c == 1 || c == 0)
        return 1;
    else
        return c*factorial(c-1);
}
