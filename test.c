// test
#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
}


// Check Positive or Negative Using Nested if...else

#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");

    return 0;
}

// Check Positive or Negative Using if...else Ladder

#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0.0)
        printf("You entered a negative number.");
    else if (num > 0.0)
        printf("You entered a positive number.");
    else
        printf("You entered 0.");

    return 0;
}


//  GCD Using for loop and if Statement

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

// GCD Using while loop and if...else Statement

#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}


// GCD for both positive and negative numbers

#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    // if user enters negative number, sign of the number is changed to positive
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}


// Program to Print English Alphabets

#include <stdio.h>
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}


Print Lowercase/Uppercase alphabets

#include <stdio.h>
int main() {
    char c;
    printf("Enter u to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c == 'U' || c == 'u') {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else {
        printf("Error! You entered an invalid character.");
    }

    return 0;
}

// Program to calculate power using recursion

#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}


// Program to count vowels, consonants, etc.

#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;

  // initialize all variables to 0
  vowels = consonant = digit = space = 0;

  // get full line of string input
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);

  // loop through each character of the string
  for (int i = 0; line[i] != '\0'; ++i) {

    // convert character to lowercase
    line[i] = tolower(line[i]);

    // check if the character is a vowel
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }

    // check if the character is a digit
    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }

    // check if the character is an empty space
    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}

his program stores a sentence entered by the user in a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}


#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


// Half Pyramid of Numbers

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}


// Half Pyramid of Alphabets

// A
// B B
// C C C
// D D D D
// E E E E E

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}

// Inverted half pyramid of *

// * * * * *
// * * * *
// * * * 
// * *
// *

// C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


// Inverted half pyramid of numbers

// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1

// C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}


//  Full Pyramid of *

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

// C Program

#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

// Full Pyramid of Numbers

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

// C Program

#include <stdio.h>
int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}

// Inverted full pyramid of *

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// C Program

#include <stdio.h>
int main() {
   int rows, i, j, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}


// Pascal's Triangle

//            1
//          1   1
//        1   2   1
//      1   3   3    1
//    1  4    6   4   1
//  1  5   10   10  5   1

// C Program

#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
// Floyd's Triangle.

// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}

// C program to find the size of int, char,
// float and double data types
  
#include <stdio.h>
  
int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
  
    // Calculate and Print
    // the size of integer type
    printf("Size of int is: %ld
",
           sizeof(integerType));
  
    // Calculate and Print
    // the size of charType
    printf("Size of char is: %ld
",
           sizeof(charType));
  
    // Calculate and Print
    // the size of floatType
    printf("Size of float is: %ld
",
           sizeof(floatType));
  
    // Calculate and Print
    // the size of doubleType
    printf("Size of double is: %ld
",
           sizeof(doubleType));
  
    return 0;
}
// C program to display Prime numbers till N
  
#include <stdbool.h>
#include <stdio.h>
  
// This function is to check 
// if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime
    // number return false.
    if (n == 1 || n == 0)
        return false;
  
    // Run a loop from 2 to n-1
    for (int i = 2; i < n; i++) {
        
        // if the number is divisible by i, then n is not a
        // prime number, otherwise n is prime number.
        if (n % i == 0)
            return false;
    }
    return true;
}
  
// Driver code
int main()
{
    int N = 10;
  
    // check for the every number from 1 to N
    for (int i = 1; i <= N; i++) {
        
        // check if i (current number) is prime
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}


// C program to display Prime numbers till N
  
#include <stdbool.h>
#include <stdio.h>
  
// below is the function to check 
// if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime so return false.
    if (n == 1 || n == 0)
        return false;
  
    // execute a loop from 2 to square root of n.
    for (int i = 2; i * i <= n; i++) {
        
        // if the number is divisible by i, then n is not a
        // prime number. otherwise, n is prime number.
        if (n % i == 0)
            return false;
    }
    return true;
}
  
// Driver code
int main()
{
    int N = 50;
  
    // check for every number from 1 to N
    for (int i = 1; i <= N; i++) {
        
        // check if current number is prime
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

// C program to check if a given 
// year is leap year or not
#include <stdio.h>
#include <stdbool.h>
  
bool checkYear(int year)
{
    // If a year is multiple of 400, 
    // then it is a leap year
    if (year % 400 == 0)
        return true;
  
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
  
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
  
// Driver code
int main()
{
    int year = 2000;
  
    checkYear(year)? printf("Leap Year"):
                     printf("Not a Leap Year");
    return 0;
}

// One line C program to check if a 
// given year is leap year or not
#include <stdio.h>
#include <stdbool.h>
  
bool checkYear(int year)
{
// Return true if year is a multiple
// of 4 and not multiple of 100.
// OR year is multiple of 400.
return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}
  
// Driver code
int main()
{
    int year = 2000;
  
    checkYear(year)? printf("Leap Year"):printf("Not a Leap Year");
    
    return 0;
}

// C program to print an inverted hollow
// star pyramid using for loop
#include <stdio.h>
void pattern_fun(int row)
{
    // To iterate through the rows
    for (int j = 1; j <= row; j++)
    {
        // To print the beginning spaces
        for (int sp = 1; sp <= j - 1; sp++)
        {
            printf(" ");
        }
 
        // Iterating from jth column to
        // last column (row*2 - (2*j - 1))
        int last_col = (row * 2 - (2 * j - 1));
 
        // To iterate through column
        for (int k = 1; k <= last_col; k++)
        {
            // To Print all star for first
            // row (j==1) jth column (k==1)
            // and for last column
            // (row*2 - (2*j - 1))
            if (j == 1 || k == 1)
                printf("*");
            else if (k == last_col)
                printf("*");
            else
                printf(" ");
        }
        // Proceeding to next row.
        printf("\n");
    }
}
 
// Driver code
int main()
{
    // Number of rows
    int row = 7;
   
    // Calling the function to
    // print the pattern.
    pattern_fun(row);
    return 0;
}
