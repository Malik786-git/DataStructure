#include<iostream>
using namespace std;



// Complexity O(log(n)) .....
// this is used for sorted arrays only, otherwise it give wrong results ...
// must dry run if not understand 


int binarySearch(int arr[], int size, int element){
//   beg beginning index 0 and last is end index 4
   int beg = 0, mid, last = size-1;

   while (beg<=last)
   {
       mid = (beg + last)/2;

       if (arr[mid] == element)
       {
           return 1;
       }
       if (arr[mid] < element)
       {
           beg = mid + 1;
       }
       else
       {
           last = mid - 1;
       }
   }
   

   return -1; 
}

int main()
{
    int arr[5] = {2, 3, 4, 6, 10}, size=5, elem;
   
    cout<<"\nEnter Element for Search: ";
    cin>>elem;
   
    int searchIndex = binarySearch(arr, size, elem);

    if(searchIndex == -1)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Search Successfully!"<<endl;
  
    return 0;
}