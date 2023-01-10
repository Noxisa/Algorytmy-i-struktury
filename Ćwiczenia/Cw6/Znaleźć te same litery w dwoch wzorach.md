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
     str[1000], ch;
   count = 0;

   
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

   
    return 0;
}

````
