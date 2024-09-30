#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *link;
} node;

int main() {
  node *head, *next, *curr, *temp;
  int n, i;

  printf("Enter number of nodes: ");
  scanf("%d", &n);

  head = (node *)malloc(sizeof(node));

  printf("Enter value of node 1: ");
  scanf("%d", &head->data);

  curr = head;

  for (i = 1; i < n; i++) {
    next = (node *)malloc(sizeof(node));

    printf("Enter value of node %d: ", i+1);
    scanf("%d", &next->data);

    curr->link = next;
    curr = next;
  }

  
  temp = head;
  while (temp != NULL) {
    printf("%d-", temp->data);
    temp = temp->link;
  }
  
  return 0;
}                                                                                               