#include <iostream> 
using namespace std; 
  
void swap(int *before, int *after)  
{  
    int temp = *before;  
    *before = *after;  
    *after = temp;  
}  
  
// This function is the implementation of bubble sort 
void bubbleSort(int arr[], int size)  
{  
    int i, j;  
    for (i = 0; i < size-1; i++)      
       
    for (j = 0; j < size-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
   
int main()  
{  
    int arr[] = {11, 42, 67, 39, 52, 21, 70};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
    return 0;  
}  
  