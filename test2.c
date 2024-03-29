// C program to sort the array in an
// ascending order using selection sort
 
#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    int arr[] = { 0, 23, 14, 12, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);
 
    selectionSort(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);
 
    return 0;
}

// C Program To Merge Two Arrays
// using Quaint Methodology
#include <stdio.h>
int main()
{
    int arr1size = 5, arr2size = 5, arr_resultsize, i, j;
 
    // elements of first Array
    int a[5] = { 1, 2, 3, 4, 5 };
 
    // elements of Second Array
    int b[5] = { 6, 7, 8, 9, 10 };
 
    // resultant Array Size Declaration
    arr_resultsize = arr1size + arr2size;
    int c[arr_resultsize];
 
    // copying array 1 elements into an array
    for (i = 0; i < arr1size; i++) {
        c[i] = a[i];
    }
 
    // copying array 2 elements into an array
    for (i = 0, j = arr1size;
         j < arr_resultsize && i < arr2size; i++, j++) {
        c[j] = b[i];
    }
 
    // Array Elements After Merging
    for (i = 0; i < arr_resultsize; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
// C Program To Merge Two Arrays
// using functions
#include <stdio.h>
 
int mergearray(int a[], int b[], int arr1size, int arr2size)
{
 
    // resultant Array Size Declaration
    int arr_resultsize = arr1size + arr2size;
    int c[arr_resultsize], i, j;
 
    // copying array 1 elements in to c array
    for (i = 0; i < arr1size; i++) {
        c[i] = a[i];
    }
 
    // copying array 2 elements in to c array
    for (i = 0, j = arr1size;
         j < arr_resultsize && i < arr2size; i++, j++) {
        c[j] = b[i];
    }
 
    // Array Elements After Merging
    for ( int k = 0; k < arr_resultsize; k++) {
        printf("%d ", c[k]);
    }
}
 
int main()
{
    int arr1size = 5, arr2size = 5;
 
    // elements of first Array
    int a[5] = { 1, 2, 3, 4, 5 };
 
    // elements of Second Array
    int b[5] = { 6, 7, 8, 9, 10 };
 
    printf("%d", mergearray(a, b, arr1size, arr2size));
    return 0;
}
// C program to rotate an array by
// d elements
#include <stdio.h>
 
/* function to print an array */
void printArray(int arr[], int size);
 
/*Function to get gcd of a and b*/
int gcd(int a, int b);
 
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    int i, j, k, temp;
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        temp = arr[i];
        j = i;
        while (1) {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 
/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
/*Function to get gcd of a and b*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    getchar();
    return 0;
}// C Program to find
// transpose of a matrix
#include <stdio.h>
#define N 4

// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[N][N] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int B[N][N], i, j;

	transpose(A, B);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d ", B[i][j]);
		printf("\n");
	}

	return 0;
}

#include <stdio.h>
#define M 3
#define N 4
 
// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][M])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            B[i][j] = A[j][i];
}
 
int main()
{
    int A[M][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3}};
 
    // Note dimensions of B[][]
    int B[N][M], i, j;
 
    transpose(A, B);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        printf("%d ", B[i][j]);
        printf("\n");
    }
 
    return 0;
	
// C program to find normal and the trace of a matrix:

// C program to find trace 
// and normal of given matrix
#include <math.h>
#include <stdio.h>
  
// Returns Normal of a matrix 
// of size n x n
int findNormal(int mat[][3], 
               int n)
{
    int sum = 0;
    
    // Run nested loop to access 
    // elements of matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += mat[i][j] * mat[i][j];
    return sqrt(sum);
}
  
// Returns trace of a matrix of 
// size n x n
int findTrace(int mat[][3], int n)
{
    int sum = 0;
    
    // Run a loop to access diagonal 
    // elements of matrix
    for (int i = 0; i < n; i++)
        sum += mat[i][i];
    return sum;
}
  
// Driven code
int main()
{
    int mat[3][3] = {{1, 2, 3}, 
                     {4, 5, 6}, 
                     {7, 8, 9}};
    printf("Normal of Matrix = %d", 
            findNormal(mat, 3));
    printf("\nTrace of Matrix = %d", 
            findTrace(mat, 3));
    return 0;
}
// C program to implement
// the above approach
#include <stdio.h>
#define N 4
  
// This function adds A[][] and B[][], 
// and stores the result in C[][]
void add(int A[][N], int B[][N], 
         int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}
  
// Driver code
int main()
{
    int A[N][N] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};
  
    int B[N][N] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};
  
    // To store result
    int C[N][N]; 
    int i, j;
    add(A, B, C);
  
    printf("Result matrix is ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", C[i][j]);
        printf("");
    }
  
    return 0;
}
// C program to multiply two square matrices.
#include <stdio.h>
#define N 4
  
// This function multiplies mat1[][] and mat2[][],
// and stores the result in res[][]
void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
  
int main()
{
    int mat1[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
  
    int mat2[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
  
    int res[N][N]; // To store result
    int i, j;
    multiply(mat1, mat2, res);
  
    printf("Result matrix is 
");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", res[i][j]);
        printf("
");
    }
  
    return 0;
}
// C program to demonstrate the boundary
// element of matrix
#include <stdio.h>
 
// This function is display the Boundary of matrix
void printBoundary(int mat[][4], int m, int n)
{
    printf("\n Boundary of Matrix \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1
                || j == n - 1)
                printf(" %d", mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
 
// Driver code
int main()
{
    int mat[4][4] = { { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 } };
 
    printf("\n Input Matrix \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d", mat[i][j]);
        }
        printf(" \n");
    }
 
    // printBoundary(a, 4, 4) function accepts a matrix, no
    // of rows and columns as input and display boundaries of
    // matrix
    printBoundary(mat, 4, 4);
    return 0;
}
// C program to demonstrate
// rotation of a matrix elements
#include <stdio.h>
  
#define R 4 // macros
#define C 4 // macros
  
// function to rotate a matrix mat[][] of size m x n.
// m = Row and n = Column
void rotatematrix(int m, int n, int mat[R][C])
{
    int row = 0, col = 0;
    int prev, curr;
    /*
    row: Starting row index
    m: ending row index
    col: starting column index
    n: ending column index
    i: iterator
    */
  
    while (row < m && col < n) {
  
        if (row + 1 == m || col + 1 == n)
            break;
  
        // Store the first element of next row and this
        // element will replace the first element of current
        // row
        prev = mat[row + 1][col];
  
        // Move elements of first row from remaining rows
        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
  
        // Move the elements of last column from the
        // remaining columns
        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;
  
        // Move the elements of last row from the remaining
        // rows
        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;
  
        // Move the elements of first column from the
        // remaining rows
        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}
  
// Driver code
int main()
{
    // create a matrix of size RxC
    // R - Rows, C - Columns
    int mat[R][C] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
  
    // Print input matrix
    printf("\n Input Matrix \n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
  
    // This function is rotate the elements of matrix.
    rotatematrix(R, C, mat);
  
    // Print rotated matrix
    printf("\n Rotated Matrix \n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}
// C Program to demonstrate the
// Sum of Diagonals of a Matrix
#include <stdio.h>
  
int main()
{
  
    int i, j, m = 3, n = 3, a = 0, sum = 0;
    
    // input matrix
    int matrix[3][3]
        = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    
    // if both rows and columns are equal then it is
    // possible to calculate diagonal sum
    if (m == n) {
        
        // printing the input matrix
        printf("The matrix is \n");
        
        // iterates number of rows
        for (i = 0; i < m; ++i) {
            
            // iterates number of columns
            for (j = 0; j < n; ++j) {
                printf(" %d", matrix[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; ++i) {
            
            // calculating the main diagonal sum
            sum = sum + matrix[i][i];
            
            // calculating the off diagonal sum
            a = a + matrix[i][m - i - 1];
        }
        
        // printing the result
        printf("\nMain diagonal elements sum is = %d\n", sum);
        printf("Off-diagonal elements sum is = %d\n", a);
    }
    else
        // if both rows and columns are not equal then it is
        // not possible to calculate the sum
        printf("not a square matrix\n");
    return 0;
}
	       
	       // C program interchange the elements
// of first and last in a matrix
// across rows.
#include <stdio.h>
 
#define n 3
 
// Function to swap the element
// of first and last row
void interchangeFirstLast(int m[][n])
{
    int rows = n;
 
    // Swapping of element between first
    // and last rows
    for (int i = 0; i < n; i++)
    {
        int t = m[0][i];
        m[0][i] = m[rows - 1][i];
        m[rows - 1][i] = t;
    }
}
 
// Driver code
int main()
{
    // Input matrix
    int m[n][n] = {{6, 3, 1},
                   {4, 5, 2},
                   {2, 4, 9}};
 
    // Printing the input matrix
    printf("Input Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
 
    // call interchangeFirstLast(m) function.
    // This function swap the element of
    // first and last row
    interchangeFirstLast(m);
 
    // Printing the original matrix
    printf("\nOutput Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
// C program to swap the element of first and last column of
// the matrix and display the result
#include <stdio.h>
#define n 3 // macros
  
void interchangeFirstLast(int mat[][n])
{
    // swap the elements between first and last columns
    for (int i = 0; i < n; i++) {
        int t = mat[i][0];
        mat[i][0] = mat[i][n - 1];
        mat[i][n - 1] = t;
    }
}
  
// Driver code
int main()
{
    // input matrix
    int mat[n][n]
        = { { 2, 4, 6 }, { 8, 2, 3 }, { 1, 9, 4 } };
  
    // print input matrix
    printf("Input Matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
  
    // call interchangeFirstLast(mat) function.
    // This function swap the element of first and last
    // columns.
  
    interchangeFirstLast(mat);
  
    // print output matrix
    printf("Output Matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
// C Program to concatenate two
// strings without using strcat
#include <stdio.h>
   
int main()
{
   
    // Get the two Strings to be concatenated
    char str1[100] = "Geeks", str2[100] = "World";
   
    // Declare a new Strings
    // to store the concatenated String
    char str3[100];
   
    int i = 0, j = 0;
   
    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);
   
    // Insert the first string
    // in the new string
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
   
    // Insert the second string
    // in the new string
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
   
    // Print the concatenated string
    printf("\nConcatenated string: %s", str3);
   
    return 0;
}
// C program to concatenating two
// strings using function
#include <stdio.h>
#include <string.h>
 
void concatenate_string(char* s, char* s1)
{
    int i;
 
    int j = strlen(s);
 
    for (i = 0; s1[i] != '\0'; i++) {
        s[i + j] = s1[i];
    }
 
    s[i + j] = '\0';
 
    return;
}
 
int main()
{
 
    char s[5000], s1[5000];
 
    printf("Enter the first  string: ");
    gets(s);
 
    printf("Enter the second string: ");
    gets(s1);
 
    // function concatenate_string
    // called and s and s1 are
    // passed
    concatenate_string(s, s1);
 
    printf("Concatenated String is: '%s'\n", s);
 
    return 0;
}
// C program to concatenate two
// strings with the help of
// recursion
#include <stdio.h>
#include <string.h>
 
void concatenate_string(char* s, char* s1)
{
 
    static int i = 0;
    static int j = strlen(s);
 
    if (!s1[i]) {
        s1[i] = '\0';
    }
    else {
        s[i + j] = s1[i];
        i++;
        concatenate_string(s, s1);
    }
}
int main()
{
 
    char s[5] = "Geeks", s1[8] = "forGeeks;
 
    // function concatenate_string
    // called and s1 and s2 are
    // passed
    concatenate_string(s, s1);
 
    printf("\nConcatenated String is: '%s'\n", s);
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string string = "geeksforgeeks";
    int index = -1;
    char fnc = ' ';
    for (auto i : string) {
        if (count(string.begin(), string.end(), i) == 1) {
            fnc = i;
            break;
        }
        else {
            index += 1;
        }
    }
    if (index == 1) {
        cout << "Either all characters are repeating or "
                "string is empty"
             << endl;
    }
    else {
        cout << "First non-repeating character is " << fnc
             << endl;
    }
    return 0;
}
// C++ program to find first
// non-repeating character
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256
 
/* Returns an array of size 256 containing count
of characters in the passed char array */
int* getCharCountArray(char* str)
{
    int* count = (int*)calloc(sizeof(int), NO_OF_CHARS);
    int i;
    for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
    return count;
}
 
/* The function returns index of first
non-repeating character in a string. If all
characters are repeating then returns -1 */
int firstNonRepeating(char* str)
{
    int* count = getCharCountArray(str);
    int index = -1, i;
 
    for (i = 0; *(str + i); i++) {
        if (count[*(str + i)] == 1) {
            index = i;
            break;
        }
    }
 
    // To avoid memory leak
    free(count);
    return index;
}
 
/* Driver program to test above function */
int main()
{
    char str[] = "geeksforgeeks";
    int index = firstNonRepeating(str);
    if (index == -1)
        cout << "Either all characters are repeating or "
                "string is empty";
    else
        cout << "First non-repeating character is "
             << str[index];
    getchar();
    return 0;
}
// CPP program to find first non-repeating
// character
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
/* The function returns index of the first
   non-repeating character in a string. If
   all characters are repeating then
   returns INT_MAX */
int firstNonRepeating(char* str)
{
    pair<int, int> arr[NO_OF_CHARS];
 
    for (int i = 0; str[i]; i++) {
        (arr[str[i]].first)++;
        arr[str[i]].second = i;
    }
 
    int res = INT_MAX;
    for (int i = 0; i < NO_OF_CHARS; i++)
 
        // If this character occurs only
        // once and appears before the
        // current result, then update the
        // result
        if (arr[i].first == 1)
            res = min(res, arr[i].second);
 
    return res;
}
 
/* Driver program to test above function */
int main()
{
    char str[] = "geeksforgeeks";
    int index = firstNonRepeating(str);
    if (index == INT_MAX)
        printf("Either all characters are "
               "repeating or string is empty");
    else
        printf("First non-repeating character"
               " is %c",
               str[index]);
    return 0;
}
	       #include <stdio.h>
#include <math.h>

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
    return 0;
	
#include <stdio.h>
#include <math.h>
/* This function converts the decimal number "decimalnum"
 * to the equivalent octal number
 */
int decimalToOctal(int decimalnum)
{
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * temp;
    	decimalnum = decimalnum / 8;
        temp = temp * 10;
    }

    return octalnum;
}
int main()
{
    int decimalnum;

    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);

    printf("Equivalent Octal Number: %d", decimalToOctal(decimalnum));

    return 0;
}
#include <stdio.h>
#include <math.h>
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main()
{
    long binarynum;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);

    printf("Equivalent decimal number is: %d", binaryToDecimal(binarynum));
    return 0;
}
#include <stdio.h>
#include <math.h>
//This function converts octal number to binary number
long octalToBinary(int octalnum)
{
    int decimalnum = 0, i = 0;
    long binarynum = 0;

    /* This loop converts octal number "octalnum" to the
     * decimal number "decimalnum"
     */
    while(octalnum != 0)
    {
	decimalnum = decimalnum + (octalnum%10) * pow(8,i);
	i++;
	octalnum = octalnum / 10;
    }

    //i is re-initialized
    i = 1;

    /* This loop converts the decimal number "decimalnum" to the binary
     * number "binarynum"
     */
    while (decimalnum != 0)
    {
	binarynum = binarynum + (decimalnum % 2) * i;
	decimalnum = decimalnum / 2;
	i = i * 10;
    }

    //Returning the binary number that we got from octal number
    return binarynum;
}
int main()
{
    int octalnum;

    printf("Enter an octal number: ");
    scanf("%d", &octalnum);

    //Calling the function octaltoBinary
    printf("Equivalent binary number is: %ld", octalToBinary(octalnum));

    return 0;
}
