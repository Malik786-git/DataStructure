#include<iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      cout<<" "<<arr[i]; 
    }
    
}
void bubbleSort(int* arr,int n){
    int temp;
    int isSorted = 1; 
    for (int i = 0; i < n-1; i++)
    {
        cout<<"pass"<<i+1<<endl;
       for (int j = 0; j < n-1-i; j++)
       {
           if (arr[j]>arr[j+1])
           {
               temp = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = temp;
               isSorted = 0;
           }
       }  
       if (isSorted)
       {
           return;
       }
       
    }
    
}

int main()
{
    
   int n = 6;
   int arr[n] = {12,54,65,7,23,9};

   
   display(arr, n);
   bubbleSort(arr, n); 
   cout<<endl;
   display(arr, n);
   
    return 0;
}