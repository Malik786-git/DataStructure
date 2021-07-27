#include<iostream>
using namespace std;



// Complexity O(size of array) or O(N) .....
// this is used for sorted and unsorted.. But we use it in the case of unsorted array.
int linearSearch(int arr[], int tot, int element){
    for (int i = 0; i < tot; i++)
    {
        if(arr[i] == element){
            return 1;
        }
    }
   return -1; 
}

int main()
{
    int arr[5], tot=5, elem;

    cout<<"Enter 5 Array Elements: ";
    for(int i=0; i<tot; i++)
        cin>>arr[i];
   
   
    cout<<"\nEnter Element for Search: ";
    cin>>elem;
   

    if(linearSearch(arr, tot, elem) == -1)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Search Successfully!"<<endl;
  
    return 0;
}