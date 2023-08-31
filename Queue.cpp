#include <iostream>
#include "Queue.h"

// Queue is a linear data structure which 
// follows FIFO (First In First Out) order.

void Queue::enqueue(int x) {
    if (rear == size - 1) {
        std::cout << "Queue is full" << std::endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue() {
    int x = -1;
    if (front == rear) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue::display() {
    for (int i = front + 1; i <= rear; i++) {
        std::cout << Q[i] << " ";
    }
    std::cout << std::endl;
}
