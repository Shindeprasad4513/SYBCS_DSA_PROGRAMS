// C program for Merge Sort
#include <stdio.h> 
#include <stdlib.h> 
void merge(int a[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	// Create temp arrays 
	int L[10], R[10];

	// Copy data to temp arrays 
	// L[] and R[] 
	for (i = 0; i < n1; i++) 
	      L[i] = a[l + i]; 
	for (j = 0; j < n2; j++) 
	      R[j] = a[m + 1 + j]; 

	// Merge the temp arrays back 
	// into arr[l..r] 
	// Initial index of first subarray 
	i = 0; 
	// Initial index of second subarray 
	j = 0; 
	// Initial index of merged subarray 
	k = l; 
	while (i < n1 && j < n2)
                { 
	    if (L[i] <= R[j])
                     { 
	      a[k] = L[i]; 
	      i++; 
	     } 
	    else
                     { 
	         a[k] = R[j]; 
	         j++; 
	     } 
	 k++; 
	} 

	// Copy the remaining elements 
	// of L[], if there are any 
	while (i < n1) { 
		a[k] = L[i]; 
		i++; 
		k++; 
	} 

	// Copy the remaining elements of 
	// R[], if there are any 
	while (j < n2) { 
		a[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort(int a[], int l, int r) 
{ 
	if (l < r)
                   { 
		// Same as (l+r)/2, but avoids 
		// overflow for large l and r 
		int m = l + (r - l) / 2; 

		// Sort first and second halves 
		mergeSort(a, l, m); 
		mergeSort(a, m + 1, r); 

		merge(a, l, m, r); 
	} 
} 

// UTILITY FUNCTIONS 
// Function to print an array 
void printArray(int a[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
  	printf("%d \t", a[i]); 

} 

// Driver code 
int main() 
{ 
	int a[100],i,n;
	
	printf("Enter limit:");
		 scanf("%d",&n);
		 printf("Enter n numbers:");
		 for(i=0;i<n;i++)
		   scanf("%d",&a[i]);

	printf("\nGiven array is \n");
	printArray(a, n);

	mergeSort(a,0,n-1);

	printf("\nSorted array is \n");
	printArray(a, n);
	
	return 0;
}