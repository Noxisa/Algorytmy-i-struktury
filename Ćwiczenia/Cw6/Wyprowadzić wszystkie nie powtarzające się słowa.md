/*
Tomas Chmelevski. Student
* -----------------
* Wyprowadzić wszystkie nie powtarzające się słowa.
* -----------------
2022-01-10
*/

Pseudokod
````
 getFourRandomWords() {
   
     i, j;
    for (i = 0; i < 4;) {
        const char *w = wszystkie słowa[rand() % 20];
        for (j = 0; j < i; j++) {
            if (strcmp(fourWords[i], w) == 0)
                break;
        }
        if (j == i) {
           
            strcpy(fourWords[i], w);
            i++;
        }
    }
}
 getFourRandomWords() {
     wylosować[4];
  
    for (int i = 0; i < 4; i++) {
        int n = rand() % (20 - i);
        int j;
        for (j = 4 - i; j < 4 && n >= wylosować[j]; j++) {
            wylosować[j - 1] = wylosować[j];
            n++;
        }
        wylosować[j - 1] = n;
        strcpy(fourWords[i],  wszystkie słowa[n]);
    }
}
 getFourRandomWords() {

       wylosować[20] = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
                      10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
   
    for ( i = 0; i < 4; i++) {
        
         n = i + rand() % (20 - i);
       
        strcpy(fourWords[i], wszystkie słowa [wylosować[n]]);
       
         wylosować[n] =   wylosować[i];
    }
}

````
