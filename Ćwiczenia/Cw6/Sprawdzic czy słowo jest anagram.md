/*
Tomas Chmelevski. Student
* -----------------
* Sprawdzic czy słowo jest anagram
* -----------------
2022-01-10
*/

Pseudokod
````
{
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
   
    if (str1[i] || str2[i])
        return false;
 
    
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
 
    return true;
}
 
{
    char str1[] = "gram";
    char str2[] = "arm";
 
   
    if (areAnagram(str1, str2))
       
 
    return 0;
}
````
