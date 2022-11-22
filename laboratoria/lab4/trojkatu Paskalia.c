// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do wyprowadzenia n-tej liczby trojkatu Paskalia
// 2022-11-22
#Zadanie 5

Pseudokod



pas(q,k){
if(k == 0)
return 0
else if (q == 1 && k == 1)
return 1
else if(k > q)
return 0 
else
return (pas(q - 1, k -1)+pas(q -1, k))
}
 
