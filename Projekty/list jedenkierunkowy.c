### Kod list jedenkierunkowy 
````
#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node {
  int info;
  struct node *next;
};
struct node *start = NULL;
int main() {
  int wybór;
  while (1) {

    printf("Wpisz swój wybór:");
    scanf("%d", &wybór);
    switch (wybór) {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      insert_begin();
      break;
    case 4:
      insert_end();
      break;
    case 5:
      insert_pos();
      break;
    case 6:
      delete_begin();
      break;
    case 7:
      delete_end();
      break;
    case 8:
      delete_pos();
      break;

    case 9:
      exit(0);
      break;

    default:
      printf("\n zły wybór:");
      break;
    }
  }
  return 0;
}
void create() {
  struct node *temp, *ptr;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL) {
    printf("\nBrak miejsca w pamięci:");
    exit(0);
  }
  printf("\nWprowadź wartość danych dla węzła:");
  scanf("%d", &temp->info);
  temp->next = NULL;
  if (start == NULL) {
    start = temp;
  } else {
    ptr = start;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}
void display() {
  struct node *ptr;
  if (start == NULL) {
    printf("\nLista jest pusty:");
    return;
  } else {
    ptr = start;
    printf("\nThe List elements are:");
    while (ptr != NULL) {
      printf("%dt", ptr->info);
      ptr = ptr->next;
    }
  }
}
void insert_begin() {
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL) {
    printf("\nBrak miejsca w pamięci:");
    return;
  }
  printf("\nWprowadź wartość danych dla węzła:");
  scanf("%d", &temp->info);
  temp->next = NULL;
  if (start == NULL) {
    start = temp;
  } else {
    temp->next = start;
    start = temp;
  }
}
void insert_end() {
  struct node *temp, *ptr;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL) {
    printf("\nBrak miejsca w pamięci:");
    return;
  }
  printf("\nWprowadź wartość danych dla węzła:");
  scanf("%d", &temp->info);
  temp->next = NULL;
  if (start == NULL) {
    start = temp;
  } else {
    ptr = start;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}
void insert_pos() {
  struct node *ptr, *temp;
  int i, pos;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL) {
    printf("\nBrak miejsca w pamięci:");
    return;
  }
  printf("\nWprowadź pozycję nowego węzła, który ma zostać wstawiony:");
  scanf("%d", &pos);
  printf("\nWprowadź wartość danych węzła:");
  scanf("%d", &temp->info);

  temp->next = NULL;
  if (pos == 0) {
    temp->next = start;
    start = temp;
  } else {
    for (i = 0, ptr = start; i < pos - 1; i++) {
      ptr = ptr->next;
      if (ptr == NULL) {
        printf("\nNie znaleziono pozycji:");
        return;
      }
    }
    temp->next = ptr->next;
    ptr->next = temp;
  }
}
void delete_begin() {
  struct node *ptr;
  if (ptr == NULL) {
    printf("\nLista jest pusty:");
    return;
  } else {
    ptr = start;
    start = start->next;
    printf("\nUsuniętym elementem jest :%d", ptr->info);
    free(ptr);
  }
}
void delete_end() {
  struct node *temp, *ptr;
  if (start == NULL) {
    printf("\nLista jest pusty:");
    exit(0);
  } else if (start->next == NULL) {
    ptr = start;
    start = NULL;
    printf("\nUsuniętym elementem jest:%d", ptr->info);
    free(ptr);
  } else {
    ptr = start;
    while (ptr->next != NULL) {
      temp = ptr;
      ptr = ptr->next;
    }
    temp->next = NULL;
    printf("\nUsuniętym elementem jest:%d", ptr->info);
    free(ptr);
  }
}
void delete_pos() {
  int i, pos;
  struct node *temp, *ptr;
  if (start == NULL) {
    printf("\nLista jest pusty:");
    exit(0);
  } else {
    printf("\nWprowadź pozycję węzła do usunięcia:");
    scanf("%d", &pos);
    if (pos == 0) {
      ptr = start;
      start = start->next;
      printf("\nUsuniętym elementem jest:%d", ptr->info);
      free(ptr);
    } else {
      ptr = start;
      for (i = 0; i < pos; i++) {
        temp = ptr;
        ptr = ptr->next;
        if (ptr == NULL) {
          printf("\n Lista jest pusty:");
          return;
        }
      }
      temp->next = ptr->next;
      printf("\nUsuniętym elementem jest:%d", ptr->info);
      free(ptr);
    }
  }
}
````
