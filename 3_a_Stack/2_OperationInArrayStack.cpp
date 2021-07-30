// Push(insert), Pop(delete), StackTop(), StackBottom() and Peek(check data position) Operation In Stack using Array... 
#include <iostream>
using namespace std;

class stackArray
{
    int size;   // stack size
    int top;   // store last element index
    int *arr; // to store data in heap

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
    void disply()
    { //display data Or Traversal
        for (int i = 0; i <= top; i++)
        {
            cout << "index " << i << " = " << (arr)[i] << endl;
        }
    }
    int isEmpty()       //Complexity O(1)
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
    int isFull()    //Complexity O(1)
    {
        if (top == size - 1)
        {
            return 1;
        }
        return 0;
    }
    /////////////////// Stack Operations ////////////////////
    // INSERTION IN STACK...
    void push(int);   //Complexity O(1)
    // DELETION IN STACK...
    int pop();  //Complexity O(1)
    // CHECK POSITION OF Data Elements using peek Function
    int peek(int);  //Complexity O(1)
    // Get Stack Top Element
    int stackTop();  //Complexity O(1)
    // Get Last Element
    int stackBottom();  //Complexity O(1)
};
// PUSH
void stackArray::push(int val){
    // check stack full
     if (isFull())
    {
        cout<<"Stack is Full!"<<endl;
    }else
    {
        top++;
        arr[top] = val;
    }
}
// POP
int stackArray::pop(){
//   check stack empty
    if (isEmpty())
    {
        cout<<"Empty Stack!"<<endl;
        return -1;
    }else
    {
        int val = arr[top]; // store return value 
        top--;
        return val;
    }
}

// PEEK (position of data in stack) 
int stackArray::peek(int position){
    int positionIndex = top-position+1;
    if (positionIndex < 0)
    {
        cout<<"Not a Valid Position!"<<endl;
        return -1;
    }else
    {
       return arr[positionIndex]; 
    } 
} 
// TOP
int stackArray::stackTop(){
     return arr[top];
}
// BOTTOM
int stackArray::stackBottom(){
     return arr[0];
}
int main()
{

    stackArray marks(10);

    // marks.disply();
    marks.push(85);
    marks.push(90); 
    marks.push(95); 
    marks.disply();

// Delete in stack and return deleted value....
   cout<<marks.pop()<<endl;
    marks.disply();


// Check what data element in given position
   cout<<marks.peek(7);


// check Stack Top And Bottom values
   cout<<"\nTop value = "<<marks.stackTop()
       <<"\nBottom value = "<<marks.stackBottom()
       <<endl;


    return 0;
}