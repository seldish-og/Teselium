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
