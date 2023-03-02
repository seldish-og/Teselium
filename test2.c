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
