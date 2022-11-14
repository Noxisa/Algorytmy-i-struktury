 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define tab_size 100

// Tomas Chmelevski. Student
  // Lista dwuchkieronkowa niesortowana
    // 2022-11-08

    struct Item {
        float value;
        struct Item *next;
        struct Item *prev;
    }It;

    float find(float value,  It *head);

    It locate(float value, It *head); 
// pointer
{
struct Item *pointer = (struct Item *)malloc(sizeof(struct Item));
  
  if (pointer == NULL) {
    
   
  } 
  else
  {
    if (temp == NULL) {
      
      pointer->value = item;
      pointer->next = NULL;
      temp = pointer;
    } 
    else
    {
      pointer->value = item;
      pointer->next = temp;
      temp = pointer;
    }
  }
}

    float retrieve(It *item); 
// wartosc

    void insert(It *item, float value, It *head);

    void remov(It *item, It *head);

    int size(int *head);

    It findMax(It *head);

    It findMin(It *head);

    int printList(It *head);

    int isEmpty(It *head);

    void next(It *item, It *head);

    void previous(It *item, It *head);

    void makeNull(It *head);

    

    int main(void) {

      
It  *head;
head = (It *)malloc(sizeof(It));
head = NULL;

      srand(time(NULL));

      for(int i = 0; i < 5; i++)
        {
          
          next(&head,rand()%100);
            previous(&head,rand()%100);
  insert(&head,rand()%100,rand()%size(head));
          
        }
        // realizacja

      return 0;
    }

    // Funkcii
It findMax (It **head){
  It * current;
  current = *head;
  int max = current -> value;

  while (current !=NULL){
    if (current -> value > max){
      max = current -> value;
    }
    currnet = current -> next;
  }
  return max;
}

int findMin(It **head){
  It * current;
  current = *head;
  int min = current -> value;
  while (current != NULL){
    if (curent -> value < max){
      min = current ->value;
    }
    current = current ->next;
  }
  return min;
}
