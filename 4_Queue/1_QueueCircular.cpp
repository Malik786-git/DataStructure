// CIRCULAR QUEUE
#include <iostream>
using namespace std;

class CircularQueue
{
    int size;
    int f; // front
    int r; // reare
    int *arr;

public:
    CircularQueue(int s)
    { //initialize array size and memory dynamically
        size = s;
        arr = new int(size);
        f = r = 0;
    }
    ~CircularQueue()
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
        if (((r + 1) % size) == f)
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
            cout << "Queue is Full!" << endl;
        }
        else
        {
            r = (r + 1) % size;
            arr[r] = value;
        }
    }
    // DELETION
    int dequeue()
    {
        int a = -1;
        if (isEmpty())
        {
            cout << "Queue is EMPTY!" << endl;
        }
        else
        {
            f = (f + 1) % size;
            a = arr[f];
        }
        return a;
    }
};

int main()
{
    CircularQueue q(2);

    q.enqueue(10);
    q.enqueue(20);

 
    return 0;
}
