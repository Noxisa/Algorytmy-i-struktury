#Zadania 5 
#jedno 

class Node {
public:

   int dane;
    
return 0;
}

#t jest najprostszym typem połączonej listy, 
#w ktorej każdy węzeł zawiera jakieś dane i wskaźnik do następnego węzeł tego samego typu danych.
#Węzeł zawiera wskaźnik do następnego węzła oznacza, że węzeł przechowuje adres następnego węzła w sekwencji. 
#Pojedyncza połączona lista umożliwia przechodzenie danych tylko w jeden sposób.

#dwykierunkowej

struct Node {
    
   int dane;
    
   struct Node* next;
 
   struct Node* prev;
   
   return 0;
}

#Lista podwójnie połączona lub lista połączona dwukierunkowo jest bardziej złożonym typem listy połączonej, 
#która zawiera kolejno wskaźnik do następnego i poprzedniego węzeł.
#Dlatego zawiera trzy części danych, wskaźnik do następnego węzła i wskaźnik do poprzedniego węzła. 
#Umożliwiłoby nam to poruszanie się po liście również w kierunku wstecznym.
