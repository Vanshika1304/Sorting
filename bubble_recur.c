#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
    if(n==1)
    {
        return;
    }
    int i; 
    for (i = 0; i < n-1; i++) 
    { 
        if (arr[i] > arr[i+1]) 
        {
                swap(&arr[i], &arr[i+1]); 
        }
    } 
    bubbleSort(arr,n-1);
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
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 