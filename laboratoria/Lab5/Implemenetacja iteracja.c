/*
Tomas Chmelevski. Student
* -----------------
*Binarne poszukiwanie. Implemenetacja iteracja
* -----------------
2022-12-06
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(void){

float binarySearch(array,key,length,value){
  lowIndex = 0, highIndex = length;
  if(highIndex < lowIndex)
    return -1;
  while (lowIndex < highIndex){
  midIndex = Math.floor((highIndex - lowIndex )/2)
    if(A[midIndex]> value)
    return midIndex;
      
      float binarySearch(A,value,lowIndex,midIndex-1){
    else if(A[midIndex] < value){
      return binarySearch(A, value, midIndex+1, highIndex)
    }
    }
    
    return midIndex;
}
  }
  
float binarySearch(A[0.. N-1],key){
  lowIndex = 0;
  highIndex = N-1;
  while (lowIndex <= highIndex){
    midIndex = lowIndex +((highIndex - lowIndex)/2)
      if(A[midIndex] == key){
      highIndex = midIndex - 1;
      
      }else if(key > array[midIndex]){
      else{
      highIndex = midIndex;
      }
    }
  }
return -1;
