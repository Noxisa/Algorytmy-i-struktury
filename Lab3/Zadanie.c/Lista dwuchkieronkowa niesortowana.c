#include <stdio.h>
// Tomas Chmelevski. Student
  // Lista dwuchkieronkowa niesortowana
    // 2022-11-08

struct Item {
  float value;
  struct Item *next;
  struct Item *prev;
};

float findMax(struct Item *head);
float findMin(struct Item *head);
void insert(struct Item **head, float value);
void printList(struct Item *item);
void removeItem(struct Item *item, struct Item **head);
int size(struct Item *head);
int isEmpty(struct Item *head);
int find(float value, struct Item *head);
float retrieve(struct Item *item);
struct Item locate(float value, struct Item *head);
void next(struct Item *item, struct Item *head);
void previous(struct Item *item, struct Item *head);

//void makeNull(struct Item *head);

 void next(struct Item *item, struct Item *head);



int main(void) {
  struct Item *head = NULL;

  printList(head);

  printf("\n1 JEŚLI PUSTY, 0 JEŚLI NIE: %d \n\n", isEmpty(head));

  insert(&head, 5.111);
  insert(&head, 5.222);

  printf("\nAktualny rozmiar listy to: %d \n\n", size(head));

  insert(&head, 5.333);
  insert(&head, 5.444);

  printList(head);

  printf("\nAktualny rozmiar listy to: %d \n\n", size(head));

  removeItem(head, &head);

  printList(head);

  printf("\nAktualny rozmiar listy to: %d \n\n", size(head));
  printf("\nWartość elementu Max to: %f \n\n", findMax(head));
  printf("\nWartość elementu Min to: %f \n\n", findMin(head));

  printf("\n1 JEŚLI PUSTY, 0 JEŚLI NIE: %d \n\n", isEmpty(head));

  printf("\n1 JEŚLI PUSTY, 0 JEŚLI NIE: %d \n\n", find(5.333, head));
  printf("\n1 JEŚLI PUSTY, 0 JEŚLI NIE: %d \n\n", find(5.555, head));

  printf("\n %f \n", retrieve(head->next->next));
  
  printList(head);
  return 0;
}

// Funkcii

void insert(struct Item **head, float value) {

  struct Item *item = (struct Item *)malloc(sizeof(struct Item));

  item->value = value;

  item->next = NULL;

  struct Item *temp = *head;

  if (*head == NULL) {
    item->prev = NULL;
    *head = item;
    return;
  }

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = item;

  item->prev = temp;
}

void removeItem(struct Item *item, struct Item **head) {

  if (*head == NULL || item == NULL)
    return;

  if (*head == item)
    *head = item->next;

  if (item->next != NULL)
    item->next->prev = item->prev;

  if (item->prev != NULL)
    item->prev->next = item->next;

  free(item);
}

int size(struct Item *head) {
  int size = 0;
  struct Item *last;

  while (head != NULL) {
    last = head;
    head = head->next;
    size++;
  }
  return size;
}

void printList(struct Item *item) {
  struct Item *last;

  while (item != NULL) {
    printf("%f->", item->value);
    last = item;
    item = item->next;
  }
  if (item == NULL)
    printf("NULL\n");
}

float findMax(struct Item *head) {
  struct Item *current;
  current = head;
  float max = current->value;

  while (current != NULL) {
    if (current->value > max) {
      max = current->value;
    }
    current = current->next;
  }
  return max;
}

float findMin(struct Item *head) {
  struct Item *current;
  current = head;
  float min = current->value;
  while (current != NULL) {
    if (current->value < min) {
      min = current->value;
    }
    current = current->next;
  }
  return min;
}

int isEmpty(struct Item *head) {
  if (head == NULL)
    return 1;
  if (head->next == NULL && head->prev == NULL)
    return 1;
  else
    return 0;
}

int find(float value, struct Item *head) {
  struct Item *current;
  current = head;
  while (current != NULL) {
    if (current->value == value) {
      return 1;
    }
    current = current->next;
  }
  return 0;
}

float retrieve(struct Item *item) { return item->value; }

struct Item locate(float value, struct Item *head){
  struct Item *current;
  current = head;
  while (current->value != value) {
    current = current->next;
  }
  return *current;  
}

void next(struct Item *item, struct Item *head){
  if (item->next != NULL)
    head = item->next;
}

void previous(struct Item *item, struct Item *head){
   if (item->prev != NULL)
    head = item->prev;
}

        // realizacja

     

    // Funkcii

