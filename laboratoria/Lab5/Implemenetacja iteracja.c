/*
Tomas Chmelevski. Student
* -----------------
*Binarne poszukiwanie. Implemenetacja iteracja.
* -----------------
2022-12-06
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  float binarySearch(int A[], int key, int length, int value) {
    int lowIndex = 0, highIndex = length;
    if (highIndex < lowIndex)
      return -1;
    while (lowIndex < highIndex) {
     int  midIndex =floor((highIndex - lowIndex) / 2);
      if (A[midIndex] > value)
        return midIndex;


  float binarySearchRecursion(int start, int end, int index){
    if(start > end){
      index = 0;
    }
  }
      else{
      float binarySearchRexursion(int end,int midIndex + 1, int Index ) {
        else if (key > A[midIndex]) {
        float binarySearchRecursion(int A, int start, int midIndex - 1, int Index);
        }
      }

      return midIndex;
    }
  }

  float BinarySearch(int A[], int key, int n) {
    int lowIndex = 0;
    int highIndex = n - 1;
    while (lowIndex <= highIndex) {
     int midIndex = lowIndex + ((highIndex - lowIndex) / 2);
      if (A[midIndex] == key) {
       highIndex = midIndex - 1;

      } else if (key > A[midIndex]) {
            }
        else {
          highIndex = midIndex;
        }
      }
    }
    return -1;
  }
