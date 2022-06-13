#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        printf("The Elements in the list Are: %d\n\a", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;
    struct Node *n5;

    head = (struct Node *)malloc(sizeof(struct Node));
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    n5 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = n2;

    n2->data = 15;
    n2->next = n3;

    n3->data = 20;
    n3->next = n4;

    n4->data = 25;
    n4->next = n5;

    n5->data = 30;
    n5->next = NULL;

    display(head);
    return 0;
}
