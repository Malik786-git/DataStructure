#include<iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      cout<<" "<<arr[i]; 
    }
    
}
void insertionSort(int* arr,int n){
   int key,j;
    for (int i = 0; i < n; i++)
    {
           key = arr[i];
           j = i-1;
           while (j>=0 && arr[j]>key)
           {
               arr[j+1] = arr[j];
               j--;
           }
           arr[j+1] = key; 
    }
    
}

int main()
{
    
   int n = 6;
   int arr[n] = {12,54,65,7,23,9};

   
   display(arr, n);
   insertionSort(arr, n); 
   cout<<endl;
   display(arr, n);
   
    return 0;
}