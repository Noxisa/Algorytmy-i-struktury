// Tomas Chmelevski. Student
// Lista jednokierunkowa niesortowana
// 2022-10-27

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Item {
  float value;
  struct Item *next;
} ItemType;

int find(float value, ItemType *head);        

int locate(float value, int *head);           

int retrieve(ItemType *item, int *head);      

void insert(ItemType **head, float value, 
            int position);                    

void remove1(ItemType **head,
             int position);                    
                                              

int size(ItemType *head);                     

int findMax(ItemType **head);                

int findMin(ItemType *head);                  

void printList(ItemType *head);               

int isEmpty(ItemType *head);                  

void next(ItemType **head,
          int cyfra);                         
                                              

void previous(ItemType **head,
              float value);                    
                                              

int makeNull(int *head);                      
int main(void) {

  ItemType *head;
  head = (ItemType *)malloc(sizeof(ItemType));
  head = NULL;


  
    previous(&head, 3);    
    previous(&head, 6);
    previous(&head, 5);
    printList(head);
  
  
    int i = size(head);     
    printf("%d \n", i);
  
  
    remove1(&head, 0);      
    printList(head);
  
    next(&head, 8);        
    printList(head);

  
    insert(&head, 4, 7);   
    printList(head);


  
    int s = isEmpty(head); 
  
    if (s == 1){
      printf("\n Lista nie jest pusty: \n");
    }
    else
    {
      printf("\n Lista jest pusty: \n");
    }  
  
  
  
  int index = find(5.0, head);      
    
    if(index == -1)
        printf("\n Nie znaleziono przedmiotu: \n");
    else
        printf("\nPrzedmiot znaleziony na pozycji: %d \n", index+1);
    

   int max = findMax(&head);      
   printf("\n max: %d \n", max);


   
   int min = findMin(head);        
   printf("\n min: %d \n", min);

  
  return 0;
}

int size(ItemType *head) {
  int counter = 0;
  if (head == NULL)
    return counter;
  else {
    ItemType *current = head;
    do {
      counter++;
      current = current->next;
    } while (current != NULL);
  }
  return counter; 
}

void printList(ItemType *head) {
  printf("\n");
  if (head == NULL) {
    printf("Lista jest pusty:");
  } else {
    ItemType *current = head;
    do {
      printf("%.f", current->value);
      printf("\n");
      current = current->next;
    } while (current != NULL);
  }
}
void remove1(ItemType **head, int position) {
  if (position == 0) {
    ItemType * tmp = NULL;

    if (*head != NULL) {
      tmp = (*head)->next;
      free(*head);
      *head = tmp;
    } }
    else {
      ItemType *current = *head;
      ItemType *tmp;
      int i = 0;

      while (current->next != NULL && i < position - 1) {
        current = current->next;
        i++;
      }
      tmp = current->next;
      current->next = tmp->next;
      free(tmp);
    }
  }

void previous(ItemType **head, float value) {

  ItemType *current;
  current = (ItemType *)malloc(sizeof(ItemType));

  current->value = value;
  current->next = *head;
  *head = current;
}
void next(ItemType **head, int cyfra) {

  if (*head == NULL) {
    *head = (ItemType *)malloc(sizeof(ItemType));
    (*head)->value = cyfra;
    (*head)->next = NULL;
  } else {
    ItemType *current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = (ItemType *)malloc(sizeof(ItemType));
    current->next->value = cyfra;
    current->next->next = NULL;
  }
}

void insert(ItemType **head, float value, int position) {
  if (position == 0)
    previous(head, value);
  else {
    if (position == size(*head))
      next(head, value);
    else {
      ItemType *current = *head;
      ItemType *tmp;

      int i = 0;
      while (current->next != NULL && i < position - 1) {
        current = current->next;
        i++;
      }

      tmp = current->next;
      current->next = (ItemType *)malloc(sizeof(ItemType));
      current->next->value = value; 
      current->next->next = tmp;
    }
  }
}
int isEmpty(ItemType *head)
{
   if(head == NULL)
   {
     return 0;
   }
   else
   {
     return 1;
   }
  
}
int find(float value, ItemType *head)
{
  ItemType *current = head;
  int index = 0;

  while (current != NULL)
    {
      if(current->value == value){
        return index;
      }
      current = current->next;
      index++;
    }
    return -1;
}

int findMax(ItemType **head)
{
    ItemType *current;
    int max=0;
    current = *head;
    
    
    while(current!=NULL) {
    if(current->value>max) {
        max=current->value;
    }
    current=current->next;
}
  return max;
}
int findMin(ItemType *head)
{
    
    int min=head->value;

    while(head->value < min){
      min = head -> value;
      head=head->next;
      }
      return min;
}
