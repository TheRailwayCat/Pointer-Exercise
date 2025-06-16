#include <stdio.h>
//Goal: have the number 10 linked to the Variable Caterpie. then declare a pointer to this variable and have the program print out the number using both the variable and the pointer
int main() {
  
  int Caterpie = 10;
  //declaring interger Caterpie as 10
  int *pCaterpie = NULL;
  pCaterpie = &Caterpie;
  //estabalishing pointer for Caterpie
  int *ppCaterpie = NULL;
  ppCaterpie = &pCaterpie;
  //estabalishing pointer for pointer of Caterpie
  
  printf("Value of Caterpie: %d", Caterpie);
  //SHould print the value of Caterpie
  
  printf("\nAddress of Caterpie: %p", &Caterpie);
  //Should print the Address of Caterpie
  
  printf("\nValue of pCaterpie: %p", pCaterpie);
  //Should print the value of the Pointer of Caterpie which should in theory be the same as above since that was what it was declared as
  
  printf("\nAddress of pCaterpie: %p", &pCaterpie);
  //Should print the Address of the Pointer of Caterpie
  
  printf("\nValue of ppCaterpie: %p", ppCaterpie);
  //Should print the value of the pointer of the Pointer of Caterpie which should in theory be equal to the value above
  
  return 0;
}
