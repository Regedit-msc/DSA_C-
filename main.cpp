#include <iostream>
#include "Stack.h"
#include "Queue.h"
// #include "Log.h"

// #define Log(x) std::cout << x << std::endl;

void Increment(int &value)
{
    value++;
}

class Player
{
public:
    int x, y, speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

// struct members are public by default whilst class
// members are private by default
// Use structs for data containers

// static keyword localises the variable to the translation unit / cpp file

int main()
{
    // if (1 > 2)
    // {
    //     Log("Yes \n");
    // }
    // else
    // {
    //     Log("No \n");
    // }
    // int i = 0;
    // for ( ;i < 5; i++)
    // {
    //     Log("Hello World");
    // }

    // POINTERS VIA STACK
    // int var = 8;
    // void* ptr = &var;
    // *(int*)ptr = 10;
    // double* ptr2 = (double*)ptr;

    // Log(var);
    // Log(ptr2);

    // POINTERS AND DOUBLE POINTERS VIA HEAP
    // char* buffer = new char[8];
    // memset(buffer, 0, 8);
    // char** ptr = &buffer;

    // delete[] buffer;

    // REFERENCES
    // int a = 7;
    // Increment(a);
    // Log("2");

    // Stack s1;
    // int option, position, value;

    // do
    // {
    //     std::cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << std::endl;
    //     std::cout << "1. Push()" << std::endl;
    //     std::cout << "2. Pop()" << std::endl;
    //     std::cout << "3. isEmpty()" << std::endl;
    //     std::cout << "4. isFull()" << std::endl;
    //     std::cout << "5. peek()" << std::endl;
    //     std::cout << "6. count ()" << std::endl;
    //     std::cout << "7. change () " << std::endl;
    //     std::cout << "8. display()" << std::endl;
    //     std::cout << "9. clear Screen" << std::endl
    //               << std::endl;
    //     ;

    //     std::cin >> option;

    //     switch (option)
    //     {
    //     case 0:
    //         break;
    //     case 1:
    //         std::cout << "Enter an item to push in the stack" << std::endl;
    //         std::cin >> value;
    //         s1.push(value);
    //         break;
    //     case 2:
    //         std::cout << "Pop Function Called - Poped Value: " << s1.pop() << std::endl;
    //         break;
    //     case 3:
    //         if (s1.isEmpty())
    //             std::cout << "Stack is Empty" << std::endl;
    //         else
    //             std::cout << "Stack is not Empty" << std::endl;
    //         break;
    //     case 4:
    //         if (s1.isFull())
    //             std::cout << "Stack is Full" << std::endl;
    //         else
    //             std::cout << "Stack is not Full" << std::endl;
    //         break;
    //     case 5:
    //         std::cout << "Enter position of item you want to peek: " << std::endl;
    //         std::cin >> position;
    //         std::cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << std::endl;
    //         break;
    //     case 6:
    //         std::cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << std::endl;
    //         break;
    //     case 7:
    //         std::cout << "Change Function Called - " << std::endl;
    //         std::cout << "Enter position of item you want to change : ";
    //         std::cin >> position;
    //         std::cout << std::endl;
    //         std::cout << "Enter value of item you want to change : ";
    //         std::cin >> value;
    //         s1.change(position, value);
    //         break;
    //     case 8:
    //         std::cout << "Display Function Called - " << std::endl;
    //         s1.display();
    //         break;
    //     case 9:
    //         system("cls");
    //         break;
    //     default:
    //         std::cout << "Enter Proper Option number " << std::endl;
    //     }

    // } while (option != 0);

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    std::cout << q.dequeue() << std::endl;

    q.display();

    return 0;
}