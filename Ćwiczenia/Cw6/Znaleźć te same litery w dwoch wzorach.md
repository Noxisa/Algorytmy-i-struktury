/*
Tomas Chmelevski. Student
* -----------------
* Znaleźć te same litery w dwoch wzorach
* -----------------
2022-01-10
*/

Pseudokod

````

 {
     str[1000], j;
   count = 0;

   
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; ++i) {
        if (j == str[i])
            ++count;
    }

   
    return 0;
}

````
