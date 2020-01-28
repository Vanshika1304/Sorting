#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void insertionSort(int arr[], int n)  
{  
    if(n<=1)
    {
        return;
    }
    int i, key;  
    insertionSort(arr,n-1);
    key=arr[n-1];
    i=n-2;
    while (i >= 0 && arr[i] > key) 
    {  
        arr[i + 1] = arr[i];  
        i = i - 1;  
    }  
    arr[i + 1] = key;   
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
    insertionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 