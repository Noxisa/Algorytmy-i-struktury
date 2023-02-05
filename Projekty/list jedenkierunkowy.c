

#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node* next;
};

void push(struct node** head_ref, int new_data) {
struct node* new_node = (struct node*)malloc(sizeof(struct node));
new_node->data = new_data;
new_node->next = NULL;
struct node *last = *head_ref;
if (*head_ref == NULL) {
*head_ref = new_node;
return;
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return;
}

void printList(struct node *node) {
while (node != NULL) {
printf("%d ", node->data);
node = node->next;
}
}

int main() {
struct node* head = NULL;
push(&head, 1);
push(&head, 2);
push(&head, 3);
push(&head, 4);
push(&head, 5);
printList(head);
return 0;
}

