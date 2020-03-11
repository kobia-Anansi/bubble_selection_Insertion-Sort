// C++ program for implementation of selection sort
#include <iostream>
using namespace std;

void swap(int *before, int *after)  
{  
    int temp = *before;  
    *before = *after;  
    *after = temp;  
}  

void selectionSort(int arr[], int size)
{
int i, j, min;
for (i = 0; i < size-1; i++)
{
// Find the minimum element in the given unsorted array
min = i;
for (j = i+1; j < size; j++)
if (arr[j] < arr[min])
min = j;
swap(&arr[min], &arr[i]);
}
}

int main()
{
int arr[] = {53, 76, 36, 12, 8};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n);
cout << "Sorted array: \n";
for (int i=0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
return 0;
}