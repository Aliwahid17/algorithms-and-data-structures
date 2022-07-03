#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     struct Node *p = head->next;

//     while (p->next != head)
//     {
//         p = p->next;
//     }

//     // At this point p points to the last node of this circular linked list

//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->prev = head;
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->prev = second;
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->prev = third;
    fourth->data = 69;
    fourth->next = NULL;

    // printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);

    // head = insertAtFirst(head, 54);
    // head = insertAtFirst(head, 58);
    // head = insertAtFirst(head, 59);

    // printf("Circular Linked list after insertion\n");
    // linkedListTraversal(head);

    return 0;
}