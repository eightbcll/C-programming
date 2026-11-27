#include <stdio.h>
#define SIZE 5
int main(void){

  int arr[SIZE] = {10,20,30,40,50};
  int *p;

  printf("Array reversal is: \n");

  for(int i = SIZE  - 1 ; i >= 0; i--){
      printf(" %d\n",arr[i]);
  }

  //using pointer to reverse the array
  /*
  printf("Pointers\n");
  for(p = arr + SIZE - 1; p >= &arr[0] ; p--){
    printf("%d\n",*p);
  }*/

  //Lemme try to print without reversal
  for(p = &arr[0]; p <=&arr[4]; p++){
    printf("%d",*p);
  }
  return 0;
}
