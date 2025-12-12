#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eighth;
    struct Node *nineth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));
    eighth = (struct Node *)malloc(sizeof(struct Node));
    nineth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second
    head->data = 7;
    head->next = second;

    // Link second and third
    second->data = 11;
    second->next = third;

    // Link third and forth
    third->data = 22;
    third->next = forth;

    // Link forth and fifth
    forth->data = 24;
    forth->next = fifth;

    // Link fifth and sixth
    fifth->data = 45;
    fifth->next = sixth;

    // Link sixth and seventh
    sixth->data = 28;
    sixth->next = seventh;

    // Link seventh and eighth
    seventh->data = 35;
    seventh->next = eighth;

    // Link eighth and ninth
    eighth->data = 19;
    eighth->next = nineth;

    // Terminate ninth
    nineth->data = 86;
    nineth->next = NULL;

    linkedListTraversal(head);
    return 0;
}