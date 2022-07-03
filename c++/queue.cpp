#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Queue
{
public:
    int size;
    int f;
    int r;
    int *arr;
    unsigned capacity;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0

Queue *createQueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->f = queue->size = 0;

    // This is important, see the enqueue
    queue->r = capacity - 1;
    queue->arr = new int[queue->capacity];
    return queue;
}

// Queue is full when size
// becomes equal to the capacity
int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(Queue *queue, int item)
{
    if (isFull(queue))
        return;
    queue->r = (queue->r + 1) % queue->capacity;
    queue->arr[queue->r] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}

// Function to remove an item from queue.
// It changes front and size

int dequeue(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->arr[queue->f];
    queue->f = (queue->f + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Function to get front of queue
int front(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->f];
}

// Function to get rear of queue
int rear(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->r];
}

int main()
{

    Queue *queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    cout << dequeue(queue)
         << " dequeued from queue\n";

    cout << "Front item is "
         << front(queue) << endl;
    cout << "Rear item is "
         << rear(queue) << endl;

    return 0;
}