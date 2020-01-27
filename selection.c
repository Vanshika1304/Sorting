#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, x; 
    for (i = 0; i < n-1; i++) 
    { 
        x = i; 
        for (j = i+1; j < n; j++) 
        {
            if (arr[j] < arr[x]) 
            {
                x = j; 
            }
        }
        swap(&arr[x], &arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}

int main() 
{ 
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 