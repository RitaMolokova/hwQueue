#include "queue.h"
#include <iostream>
#include <stdexcept>
using namespace std;

queue::queue() : size(0), cap(10) 
{
    data = new int[cap];
}

queue::~queue() {
    delete[] data;
}

int queue::pop() {
    if (IsEmpty()) {
        cout << "queue is empty";
    }

    int result = data[0];
    for (int i = 0; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size -= 1;
    return result;
}

int queue::top() 
{
    if (IsEmpty()) 
    {
        cout << "queue is empty";
    }
    return data[0];
}

void queue::push(int value) 
{
    if (IsFull()) 
    {
        resize();
    }
    data[size] = value;
    size += 1;
}

bool queue::IsFull() 
{
    size == cap;
    return size;
}

bool queue::IsEmpty() 
{
    size = 0;
    return size;

}

void queue::print() 
{
    if (IsEmpty()) 
    {
        cout << "queue is empty" << endl;
        return;
    }
    for (int i = 0; i < size; i++) 
    {
        cout << data[i] << ' ';
    }
    cout << endl;
}

void queue::resize() 
{
    cap *= 2;
    int* newData = new int[cap];
    for (int i = 0; i < size; i++) 
    {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
}
