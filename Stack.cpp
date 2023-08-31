
#include <iostream>
#include "Stack.h"
// Stack is a Linear Data Structure which operates in 
// LIFO (Last In First Out) or FILO (First In Last Out) manner.

Stack::Stack()
{
    top = -1; // Index of the top element
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

bool Stack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::isFull()
{
    if (top == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack::push(int val)
{
    if (isFull())
    {
        std::cout << "Stack Overflow" << std::endl;
    }
    else
    {
        top++; // Increment the top index
        arr[top] = val;
    }
}

int Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow" << std::endl;
        return 0;
    }
    else
    {
        int popValue = arr[top];
        arr[top] = 0;
        top--;
        return popValue;
    }
}

int Stack::count()
{
    return (top + 1);
}

int Stack::peek(int pos)
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow" << std::endl;
        return 0;
    }
    else
    {
        return arr[pos];
    }
}

void Stack::change(int pos, int val)
{
    arr[pos] = val;
    std::cout << "Value changed at location " << pos << std::endl;
}

void Stack::display()
{
    std::cout << "All values in the Stack are " << std::endl;
    for (int i = 4; i >= 0; i--)
    {
        std::cout << arr[i] << std::endl;
    }
};
