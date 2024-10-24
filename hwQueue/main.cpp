#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    queue a;
    a.push(2);
    a.push(4);
    a.push(8);
    a.print();
    while (!a.IsEmpty()) 
    {
        cout << a.pop() << ' ';
    }
}