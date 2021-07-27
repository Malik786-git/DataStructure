#include<iostream>
using namespace std;

// When a function call itself to make a problem small to solve it easily 

int Power(int n, int pow){
    if (pow == 1)
    {
      return 1;
    }
    return n * Power(n, pow-1);
}

int main()
{
   cout<<Power(4,4);
    return 0;
}

/* 
 power(4,4)  ==>  4 * power(4,3)  ==>  4 * power(4,2)  ==>  4 * power(4,1) 
   64                 4*16=64               4*4 = 16             4*1 = 4    

*/