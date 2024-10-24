#pragma once

class queue {
    int* data;
    int size;
    int cap;
    void resize();
public:
    queue();
    ~queue();
    int pop();
    int top();
    void push(int value);
    bool IsFull();
    bool IsEmpty();
    void print();
};

