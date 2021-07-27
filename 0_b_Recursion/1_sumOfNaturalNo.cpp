#include<iostream>
using namespace std;

// When a function call itself to make a problem small to solve it easily 

int sum(int n){
    if (n == 0)
    {
      return 0;
    }
    return n + sum(n-1);
}

int main()
{
   cout<<sum(4);
    return 0;
}

/* 
 sum(4)  ==>  4 + sum(3)  ==>  3 + sum(2)  ==>  2 + sum(1) ==>  1 + sum(0);
  10           4 + 6             3 + 3            2 +1             1 + 0      

*/