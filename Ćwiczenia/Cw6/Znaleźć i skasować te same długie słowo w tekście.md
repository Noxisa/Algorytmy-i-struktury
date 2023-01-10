/*
Tomas Chmelevski. Student
* -----------------
* Znaleźć i skasować te same długie słowo w tekście.
* -----------------
2022-01-10
*/
````
max_dlugosc_slowa(text[], textSize[])
brute_force_remove(text[], pattern, textSize[], patternSize)
{     

i = 0
j = 0, k 
   
    for(k=0; textSize[k]!='\0'; k++){  
          
        if(text[k] != ' ' && textSize[k] != '\0'){  
            
            text[i][j++] = tolower(textSize[k]) 
        }  
        else{  
            text[i][j] = '\0' 
             
            i++ 
             
            j = 0 
        }  
    }  
      
   
    length = i+1  
      
  
    for(i = 0; i < textSize; i++){  
        count = 1
        for(j = i+1; j < patternSize; j++){  
           if(strcmp(text[i], text[j]) == 0 && (strcmp(pattern[j],"0") != 0)){  
              
                
               strcpy(text[j],"0")  
           }   
        }  
          
        if(count > 1 )  
             
    }  
    
    return 0  
} 
````
