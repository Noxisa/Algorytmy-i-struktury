#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define tab_size 100

// Tomas Chmelevski. Student
// Lista jednokierunkowa niesortowana
// 2022-10-29

typedef struct Item {
  float value;
  struct Item *next;
} It;

int find(float value, It *head);        

int locate(float value, int *head);           

int retrieve(It *item, int *head);      

void insert(It **head, float value, 
            int position);                    

void remove1(It **head,
             int position);                    
                                              

int size(It *head);                     

It findMax(It **head);                

It findMin(It *head);                  

void printList(It *head);               

int isEmpty(It *head);                  

void next(It **head,
          int cyfra);                         
                                              

void previous(It **head,
              float value);                    
                                              

int makeNull(int *head);                      
int main(void) {

  It *head;
  head = (It *)malloc(sizeof(It));
  head = NULL;


	srand(time(NULL));

for(int i = 0; i < 3; i++)
{
  

    remove1(&head,rand()%100);      
  
    next(&head, rand()%100);        
   
    insert(&head, rand()%100,rand()%size(head)); 

}
return 0;
}  
  
 void remove_by_index(It **head,int pos){
        It *current = *head;
        It *tmp;
        int i=0;
        while (current->next != NULL && i<pos-1) {
                    current=current->next;
            i++;    
        }
        tmp = current->next;
        current->next = tmp->next;
        free(tmp);
    }

    void insert(It **head, float value, int pos){
        if(pos==0){
            next(head, value);
        } 
        else{
            if(pos==size(*head)) previous(head, value);
            else
            {
                It *current=*head;
                    It *tmp;

                int i=0;
                while (current->next != NULL && i<pos-1) {
                        current = current->next;
                    i++;
                }

                tmp=current->next;
                current->next=(It *)malloc(sizeof(It));
                current->next->value=value;
                current->next->next=tmp;
            }
        }
    }

  
    int isEmpty(It *head){
        if(head==NULL){
            return 1;
        }
        return 0;
    }


int size(It *head) {
  int counter = 0;
  if (head == NULL)
    return counter;
  else {
    It *current = head;
    do {
      counter++;
      current = current->next;
    } while (current != NULL);
  }
  return counter; 
}

void printList(It *head) {
  printf("\n");
  if (head == NULL) {
    printf("Lista jest pusty:");
  } else {
    It *current = head;
    do {
      printf("%.f", current->value);
      printf("\n");
      current = current->next;
    } while (current != NULL);
  }
}

void remove1(It**head, int position) {
  if (position == 0) {
    It * tmp = NULL;

    if (*head != NULL) {
      tmp = (*head)->next;
      free(*head);
      *head = tmp;
    } }
    else {
      It *current = *head;
      It *tmp;
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

 void makeNull1(It *head){
        It *ptr1,*ptr2;
        if (!head->next) return;
        
        ptr1 = head->next;

        while (ptr1) {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
        free(ptr2);
        }
        head->next = 0;
    }

    void printList1(It *head){
        printf("\n");
        if(head==NULL) printf("List is empty");
        else
        {
            It *current=head;
                do {
                printf("%i", current->value);
                printf("\n");
                current = current->next;
                }while (current != NULL);
    
        }
    }

 int size1(It *head){
        int counter=0;
        if(head==NULL) return counter;
        else
        {
            It *current=head;
                do {
                counter++;
                current = current->next;
                }while (current != NULL);
        }
        return counter;
    }

    void next1(It **head,float value){
        It *current;
        current=(It *)malloc(sizeof(It));
    
        current->value=value;
        current->next=(*head);
        *head=current;
    }


void previous(It **head, float value) {

  It*current;
  current = (It *)malloc(sizeof(It));

  current->value = value;
  current->next = *head;
  *head = current;
}
void next(It **head, int cyfra) {

  if (*head == NULL) {
    *head = (It *)malloc(sizeof(It));
    (*head)->value = cyfra;
    (*head)->next = NULL;
  } else {
    It *current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = (It *)malloc(sizeof(It));
    current->next->value = cyfra;
    current->next->next = NULL;
  }
}

void insert1(It **head, float value, int position) {
  if (position == 0)
    previous(head, value);
  else {
    if (position == size(*head))
      next(head, value);
    else {
      It *current = *head;
      It *tmp;

      int i = 0;
      while (current->next != NULL && i < position - 1) {
        current = current->next;
        i++;
      }

      tmp = current->next;
      current->next = (It *)malloc(sizeof(It));
      current->next->value = value; 
      current->next->next = tmp;
    }
  }
}
int isEmpty1(It *head)
{
   if(head == NULL)
   {
     return 1;
   }
   else
   {
     return 0;
   }
  
}
  void previous1(It **head,float value){
        if(*head==NULL)
        {
        *head = (It *)malloc(sizeof(It));
           (*head)->value = value;
             (*head)->next = NULL;
        }else
        {
        It *current=*head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = (It *)malloc(sizeof(It));
            current->next->value = value;
            current->next->next = NULL;
        }
    }

int find(float value, It *head)
{
  It *current = head;
  int index = 0;

  while (current != NULL)
    {
      if(current->value == value){
	printf("ta wartosc jest w liscie");
        return 1;
      }
      current = current->next;
      index++;
    }
    return 0;
}

int locate1(float value, It *head){
        It *current = head;
        int index = 0;
        if(find(value, head)==1){
            while (current != NULL) {
                if (current->value == value) {
                    return index;
                }
                current = current->next;
                index++;
            }
        }
    }

int findMax1(It **head)
{
    It *current;
        current = *head;
        int max = current->value;

        while (current != NULL) {
            if (current->value > max) {
                max = current->value;
            }
            current = current->next;
        }
        return max;
    }



int findMin1(It **head)
{
   It *current;
        current = *head;
        int min = current->value;
        while (current != NULL) {
            if (current->value < min) {
                min = current->value;
            }
            current = current->next;
        }
        return min;
    }
