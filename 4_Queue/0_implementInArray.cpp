#include <iostream>
using namespace std;

class Queue
{
    int size;
    int f;    // front 
    int r;   // reare
    int *arr;

public:
    Queue(int s)
    { //initialize array size and memory dynamically
        size = s;
        arr = new int(size);
        f = r = -1;
    }
    ~Queue()
    { //free memory
        delete arr;
    }

    int isEmpty()
    {
        if (r == f)
        {
            return 1;
        }
        return 0;
    }
    int isFull()
    {
        if (r==size-1)
        {
            return 1;
        }
        return 0;
    }
    // INSERTION
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is Full!"<<endl;
        }
        else
        {
            r++;
            arr[r] = value;
        }
    }
    // DELETION
    int dequeue()
    {
        int a = -1;
        if (isEmpty())
        {
            cout << "Queue is EMPTY!"<<endl;
        }
        else
        {
           f++;
           a = arr[f];
        }
        return a;
    }
};
int main()
{
    Queue q(2);
 
 if (q.isEmpty())
 {
      cout<<"Empty Queue"<<endl;
 }else
 {
      cout<<"Queue is Not Empty"<<endl;
 }
 
    q.enqueue(10);
    q.enqueue(20);

 if (q.isEmpty())
 {
      cout<<"Empty Queue"<<endl;
 }else
 {
      cout<<"Not Empty Queue"<<endl;
 }


//  check Full Condition
 if (q.isFull())
 {
      cout<<"Full Queue"<<endl;
 }else
 {
      cout<<"Queue is Not Full"<<endl;
 }
    q.dequeue();
    q.dequeue();
    
 if (q.isEmpty())
 {
      cout<<"Empty Queue"<<endl;
 }else
 {
      cout<<"Not Empty Queue"<<endl;
 }
 
    return 0;
}