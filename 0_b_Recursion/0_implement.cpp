#include<iostream>
using namespace std;

// When a function call itself to make a problem small to solve it easily 

void helloWorld(int n){
    if (n == 0)   // base case
    {
      return;
    }
    
    cout<<"Hello World! "<<n<<"\n";
    helloWorld(n-1);
  
}

int main()
{
   helloWorld(5);
    return 0;
}