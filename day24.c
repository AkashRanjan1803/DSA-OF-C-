// Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.
// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer key
// Output:
// - Print the linked list elements after deletion, space-separated
// Example:
// Input:
// 5
// 10 20 30 40 50
// 30
// Output:
// 10 20 40 50
// Explanation:
// Traverse list, find first node with key, remove it by adjusting previous node's next pointer.
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int n, i, key;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    struct Node *prev = NULL, *current = NULL;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    scanf("%d", &key);
    current = head;
    if(current != NULL && current->data == key)
    {
        head = current->next;
        free(current);
    }
    else
    {
        while(current != NULL && current->data != key)
        {
            prev = current;
            current = current->next;
        }
        if(current != NULL)
        {
            prev->next = current->next;
            free(current);
        }
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
