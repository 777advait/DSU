#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node;

int main() {
    node *head, *next, *curr, *temp;
    int key, n, i, pos = 1;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = (node *)malloc(sizeof(node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    curr = head;

    for (i = 1; i < n; i++) {
        next = (node *) malloc(sizeof(node));
        
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &next->data);

        curr->link = next;
        curr = next;
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp->data != key) {
        if (temp == NULL) {
            printf("Element not found");
            return 0;
        }
        temp = temp->link;
        pos++;
    }

    printf("Element found at position %d", pos);
    
    return 0;
}