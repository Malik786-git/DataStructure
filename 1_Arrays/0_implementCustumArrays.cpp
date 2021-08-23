#include <iostream>
using namespace std;

class intArray
{
    int totalSize;
    int usedSize;
    int *ptr;

public:
    intArray(int size, int used)
    { //initialize array size and memory dynamically
        totalSize = size;
        usedSize = used;
        ptr = new int(size);
    }
    ~intArray()
    { //free memoty
        delete ptr;
    }
    void setData()
    { //input data
        for (int i = 0; i < usedSize; i++)
        {
            cout << "Enter Data = ";
            cin >> (ptr)[i];
        }
    }
    void disply()
    { //display data Or Traversal
        for (int i = 0; i < usedSize; i++)
        {
            cout << "index " << i << " = " << (ptr)[i] << endl;
        }
    }
};

int main()
{
    intArray marks(100, 5);
    marks.setData();
    cout << endl;
    marks.disply();

    return 0;
}