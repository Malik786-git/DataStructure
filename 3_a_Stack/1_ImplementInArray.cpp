#include <iostream>
using namespace std;

class stackArray
{
    int size;
    int top;
    int *arr;

public:
    stackArray(int s)
    { //initialize array size and memory dynamically
        size = s;
        top = -1;
        arr = new int(size);
    }
    ~stackArray()
    { //free memory
        delete arr;
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
    int isFull()
    {
        if (top == size - 1)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    
    stackArray marks(100);
  
    // check stack empty
    if (marks.isEmpty())
    {
        cout<<"Empty Stack!"<<endl;
    }else
    {
        cout<<"Stack Not Empty"<<endl;
    }
    // check stack full
     if (marks.isFull())
    {
        cout<<"Full Stack!"<<endl;
    }else
    {
        cout<<"Stack Not Full"<<endl;
    }
    
     
    return 0;
}