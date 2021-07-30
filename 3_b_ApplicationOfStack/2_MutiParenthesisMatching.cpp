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
    int stackTop(); //Complexity O(1)
};
// TOP
int stackArray::stackTop()
{
    return arr[top];
}
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

bool MultiparenthesisMatch(char exp[])
{

    stackArray s(100); // create temporary obj of stack class to store "(" and perform push and pop operation
    char popChar;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (
            exp[i] == '(' ||
            exp[i] == '{' ||
            exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if (
            exp[i] == ')' ||
            exp[i] == '}' ||
            exp[i] == ']')
        {
            if (s.isEmpty())
            {
                return false;
            }
            popChar = s.pop();
            if (
                exp[i] == '{' && popChar == '}' ||
                exp[i] == '(' && popChar == ')' ||
                exp[i] == '[' && popChar == ']')
            {
                return true;
            }
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
    char exp[30] = "{8*(9 +1)}]";

    if (MultiparenthesisMatch(exp) == true)
    {
        cout << "Expression March!";
    }
    else
    {
        cout << "Not Match!";
    }

    return 0;
}
