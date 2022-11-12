#include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
// Tomas Chmelevski . Student
    // kolejka
    // 2022-11-08

    struct Item {
        float value;
        struct Item *next;
    };
  struct Item *begin;
    void insert( float It);
    void remo();
    void insertElement();


    void main(void) {
      float It;
    
      for (int i = 1; i<=7; i++){

        printf("Podaj liczby %d:", i);
        scanf("%f", &It);
      insert(It);
        }
      remo();
      insertElement();
      } 

void insert(float It){
  struct Item *pointer = (struct Item *)malloc(sizeof(struct Item));
 if (pointer == NULL){
   
 }
 else
 {
   if (begin == NULL){
     pointer -> value = It;
     pointer -> next = NULL;
     begin = pointer;
   }
 }
}
void remo(){
  float It;
  struct node *end;

  if(begin == NULL){
    
  }
  else
  {
    It = begin -> value;
    end = begin;
    begin = begin -> next;
    free(end);

    printf("Usuwanie liczba jest %.f\n",It);
  }
}
void insertElement(){
  struct Item *pointer;
  
  pointer = begin;
  
  if (pointer == NULL) {
  }
  else
  {
    while (pointer != NULL) {
      
      printf("%f\n", pointer->value);
      pointer = pointer->next;
    }
  }
}
