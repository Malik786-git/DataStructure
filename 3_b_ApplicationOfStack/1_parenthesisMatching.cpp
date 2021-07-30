// add function of Parenthesis matching ! in Array stack code to expression parenthesis is balance or not
#include <iostream>
using namespace std;

class stackArray
{
public:
    int size;
    int top;
    char *arr;
    stackArray(int s)
    { //initialize array size and memory dynamically
        size = s;
        top = -1;
        arr = new char(size);
    }
    ~stackArray()
    { //free memory
        delete arr;
    }
    void disply()
    { //display data Or Traversal
        for (int i = 0; i <= top; i++)
        {
            cout << "index " << i << " = " << (arr)[i] << endl;
        }
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
    /////////////////// Stack Operations ////////////////////

    void push(char);
    int pop();
};
// PUSH
void stackArray::push(char val)
{
    // check stack full
    if (isFull())
    {
        cout << "Stack is Full!" << endl;
    }
    else
    {
        top++;
        arr[top] = val;
    }
}
// POP
int stackArray::pop()
{
    //   check stack empty
    if (isEmpty())
    {
        cout << "Empty Stack!" << endl;
        return -1;
    }
    else
    {
        char val = arr[top]; // store return value
        top--;
        return val;
    }
}

bool parenthesisMatch(char exp[])
{

    stackArray s(100); // create temporary obj of stack class to store "(" and perform push and pop operation

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            s.push('(');
        }
        else if (exp[i] == ')')
        {
            if (s.isEmpty())
            {
                return false;
            }
            s.pop();
        }
    }
    // finally check is empty or not
    if (s.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char exp[10] = "8*(9 +1)";

      if (parenthesisMatch(exp)  == true)
      {
          cout<<"Expression March!";
      }else
      {
         cout<<"Not Match!";
      }

    return 0;
}