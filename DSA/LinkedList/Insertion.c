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

// Case 1: Insert at first

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Case 2: Insert at any index
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3: Insert at End
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4: Insert after a node
struct Node *insertafterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

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

    // Terminate ninth
    fifth->data = 86;
    fifth->next = NULL;
    printf("Linked List before insertion \n");
    linkedListTraversal(head);
    // head = insertAtFirst(head , 56);
    // head = insertAtIndex(head , 56,1);
    // head = insertAtEnd(head, 25);
    head = insertafterNode(head, second, 45);
    printf("Linked list after insertion \n");
    linkedListTraversal(head);

    return 0;
}