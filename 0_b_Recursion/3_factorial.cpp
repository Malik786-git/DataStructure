#include<iostream>
using namespace std;

// When a function call itself to make a problem small to solve it easily 

int factorial(int n){
    if (n == 1)
    {
      return 1;
    }
    return n * factorial(n-1);
}

int main()
{
   cout<<factorial(4);
    return 0;
}

/* 
 power(4)  ==>  4 * power(3)  ==>  3 * power(2)  ==>  2 * power(1) 
   64                 4*16=64               4*4 = 16             2*1 = 4    

*/