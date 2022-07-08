#include <bits/stdc++.h>
using namespace std;

// Structure for the elements in the pripority queue

struct item
{
    int value;
    int pripority;
};

// store the element of a pripority Queue
item pr[1000];

// Pointer to the last index
int size = -1;

// Function to insert a new element into pripority Queue

void enqueue(int value, int priority)
{
    // Increase the size
    size++;
    // Insert the element
    pr[size].value = value;
    pr[size].pripority = priority;
}

// Function to check the top element

int peek()
{
    int highestPriority = INT_MIN;
    int ind = -1;

    // Check for the element with highest pripority
    for (int i = 0; i <= size; i++)
    {
        // If pripority is same choose the element with the highest value
        if (highestPriority == pr[i].pripority && ind > -1 && pr[ind].value < pr[i].value)
        {
            highestPriority = pr[i].pripority;
            ind = i;
        }
        else if (highestPriority < pr[i].pripority)
        {
            highestPriority = pr[i].pripority;
            ind = i;
        }
    }
    // Return position of the element
    return ind;
}

// Function to remove the element with
// the highest priority
void dequeue()
{
    // Find the position of the element
    // with highest priority
    int ind = peek();

    // Shift the element one index before
    // from the position of the element
    // with highest priority is found

    for (int i = ind; i < size; i++)
    {
        pr[i] = pr[i + 1];
    }
    // Decrease the size of the
    // priority queue by one
    size--;
}

int main()
{
    // Function Call to insert elements
    // as per the priority
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);

    // Stores the top element
    // at the moment
    int ind = peek();

    cout << pr[ind].value << endl;

    // Dequeue the top element
    dequeue();

    // Check the top element
    ind = peek();
    cout << pr[ind].value << endl;

    // Dequeue the top element
    dequeue();

    // Check the top element
    ind = peek();
    cout << pr[ind].value << endl;
    return 0;
}