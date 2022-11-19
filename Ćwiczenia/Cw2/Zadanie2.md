#Zadanie 2
pseudocod Iloczyn i reszta. Realizacja z warunkem pocztkawym calkowita liczba - n, wyjsce licby(lista)

int iloczyn_i_reszta(liczba)
{
    int a,b,dzielnik=2;
    int lista[1][liczba/2];

    while(dzielnik<liczba/2){
        a=liczba%dzielnik;
        b=liczba/dzielnik;
        lista[0][dzielnik-2]=a;
        lista[1][dzielnik-2]=b;
        dzielnik++;
    }

    return lista;
}


![Screenshot (97)](https://user-images.githubusercontent.com/115026224/199216369-13cadd75-ff23-4c67-ab78-24f2388fb5f1.png)



