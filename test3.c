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
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int choice, num, i;
    unsigned long int fact;

    while(1)
    {
        printf("1. Factorial \n");
        printf("2. Prime\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter number:\n");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("\n\nFactorial value of %d is = %lu\n\n\n",num,fact);
                break;
        
            case 2:
                printf("Enter number:\n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("\n%d is not a prime number\n\n", num);
                        break;
                    }
                
                }
                /*
                    Not divisible by any number other 
                    than 1 and itself
                */
                if(i == num) 
                {
                    printf("\n\n%d is a Prime number\n\n", num);
                    break;
                }
        
            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);
        
                if(num%2 == 0) // 0 is considered to be an even number
                    printf("\n\n%d is an Even number\n\n",num);
                else
                    printf("\n\n%d is an Odd number\n\n",num);
                break;
        
            case 4:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                exit(0);    // terminates the complete program execution
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<windows.h>
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    //BACKGROUND_RED| BACKGROUND_GREEN| BACKGROUND_BLUE| BACKGROUND_INTENSITY
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);
    printf("\n\nStudytonight just showed you how to put colors to your code!!");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);
    printf("\n\nIsn't this Awesome?");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_RED);
    printf("\n\nYou just did something that only 1 out of 10 coders are familiar of :)\n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf("\n\nYou are doing great!!");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
    printf("\n\nThe best is yet to come!");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf("\n\nWhat are you waiting for?? Just play with it!!");

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>
#include<math.h>  // This is needed to use sqrt() function

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    float a, b, c, determinant, r1, r2, real, imag;
    printf("\n\nEnter coefficients a, b and c: \n\n\n");
    scanf("%f%f%f", &a, &b, &c);

    /*
        mathematical formula to know the 
        nature of the roots
    */
    determinant == b*b - 4*a*c; 

    if(determinant > 0)    // both roots are real
    {
        r1 = (-b + sqrt(determinant))/2*a;  // Brackets are important
        r2 = (-b - sqrt(determinant))/2*a;
        printf("\n\n\nRoots are: %.2f and %.2f ", r1, r2);
    }
    else if(determinant == 0)   // both roots are real and equal
    {
        r1 = r2 = -b/(2*a); // brackets are important
        printf("\n\n\nRoots are: %.2f and %.2f ", r1, r2);
    }
    /*
        Determinant < 0 - both roots are imaginary of the 
        form real + i*imaginary
    */
    else
    {
        real = -b/(2*a);
        imag = sqrt(-determinant)/(2*a);
        printf("\n\n\nRoots are %.2f + i%.2f and %.2f - i%.2f ", real, imag, real, imag);
    }
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int year;
    printf("Enter the year to check if it is a leap year: ");
    scanf("%d", &year);
    
    if(year % 4 == 0){
        if(year % 100 == 0){  
            if(year % 400 == 0)
                printf("\n\n%d is a leap year\n", year);
            else 
                printf("\n\n%d is not a leap year\n", year);
        }
        else
            printf("\n\n%d is a leap year\n", year);
    }
    else
        printf("\n\n%d is not a leap year\n", year);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    float a, b, c;

    printf("Enter 3 numbers:\n\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a >= b && a >= c)
    {
        /*
            %.3f prints the floating number 
            upto 3 decimal places
        */
        printf("\n\nLargest number = %.3f ", a);
    }
    else if(b >= a && b >= c)
    {
        printf("\n\nLargest number is = %.3f", b);
    }
    else
    {
        printf("\n\nLargest number is = %.3f", c);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    double a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%lf%lf%lf", &a, &b, &c);  //lf is a format specifier to take double as input

    // a is the largest
    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            /*
                .2lf restricts the number till 
                2 decimal places
            */
            printf("\n\n%.2lf is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("\n\n%.2lf is the 2nd largest number\n",a);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n",c);
        }
    }

    // c is the largest number of the three
    else if(a >= b)
    {
        printf("\n\n%.2lf is the 2nd largest number\n", a);
    else
    {
        printf("\n\n%.2lf is the 2nd largest number\n", b);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int first, second, *p , *q, sum;
    printf("Enter two integers to add using pointers:\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("\n\nThe sum of the entered numbers is: %d", sum);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int rad;
    float PI = 3.14, area, ci;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &rad);
    area = PI*rad*rad;
    printf("\n\n\n Area of the circle is: %f ", area);
    ci = 2*PI*rad;
    printf("\n\n\n Circumference of the circle is: %f", ci);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int h, b;
    float area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
        Also, typecasting denominator from int to float 
        to get the output in float
    */
    area = (h*b)/(float)2;
    printf("\n\n\nThe area of the triangle is: %f", area);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int h, b;
    float area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
        Also, typecasting denominator from int to float 
        to get the output in float
    */
    area = (h*b)/(float)2;
    printf("\n\n\nThe area of the triangle is: %f", area);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int a, b, add, subtract, multiply;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);

    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/b;

    printf("\nAddition of the numbers = %d\n", add);
    printf("Subtraction of 2nd number from 1st = %d\n", subtract);
    printf("Multiplication of the numbers = %d\n", multiply);
    printf("Dividing 1st number from 2nd = %f\n", divide);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
// C program to check whether a
// number can be expressed as sum
// of two prime numbers
#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
	int i, isPrime = 1;

	// 0 and 1 are not prime numbers
	if (n == 0 || n == 1)
	{
		isPrime = 0;
	}
	else
	{
		for (i = 2; i <= n / 2; ++i)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
	}

	return isPrime;
}

// Driver code
int main()
{
	int n = 7, i, flag = 0;

	for (i = 2; i <= n / 2; ++i)
	{
		// condition for i to be a
		// prime number
		if (isPrime(i) == 1)
		{
			// condition for n-i to
			// be a prime number
			if (isPrime(n - i) == 1)
			{
				printf("Yes\n");
				return 0;
			}
		}
	}

	printf("No\n");
	return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[10][10], mat2[10][10], matmult[10][10];
    int row1, col1, row2, col2, i, j, k, sum;
    printf("Enter size of first matrix:\n");
    printf("Enter row size: ");
    scanf("%d", &row1);
    printf("Enter column size: ");
    scanf("%d", &col1);
    printf("\nEnter the element of first matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("\nEnter size of second matrix:\n");
    printf("Enter row size: ");
    scanf("%d", &row2);
    printf("Enter column size: ");
    scanf("%d", &col2);
    printf("\nEnter the element of second matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
            scanf("%d", &mat2[i][j]);
    }
    if(col1!=row2)
    {
        printf("\nMultiplication not possible!");
        printf("\nExiting...\n");
        printf("Press any key...");
        getch();
        return 0;
    }
    printf("\nMultiplying the two matrix...\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            sum = 0;
            for(k=0; k<col1; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            matmult[i][j] = sum;
        }
    }
    printf("The multiplication result (resultant matrix) is:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
            printf("%d ", matmult[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[50], str2[50];
    int i=0, chk=0;
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if(chk==0)
        printf("\nStrings are Equal");
    else
        printf("\nStrings are not Equal");
    getch();
    return 0;
}
