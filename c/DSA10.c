#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 3;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    s->arr[0] = 5;
    s->top++;
    s->arr[1] = 8;
    s->top++;
    s->arr[2] = 9;
    s->top++;
    

    if (isEmpty(s))
    {
        printf("Stack underflow");
    }

    else if (isFull(s))
    {
        printf("Stack overflow");
    }

    else
    {
        printf("The stack is not empty");
    }

    return 0;
}