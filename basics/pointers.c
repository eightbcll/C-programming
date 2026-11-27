//Learning pointers and arrays 1

#include <stdio.h>

int *find_number(int numbers[] ,int size);

int main (void){
  int numbers[] = {10,20,30,40,50};
  int *result = find_number(numbers,5);
  if(result !=NULL){
     printf("Found: %d",*result);
  }
  return 0;
}

int *find_number(int numbers[] ,int size){
  for(int i = 0 ; i < size; i++){
    if(numbers[i] == 30){
      return &numbers[i];
    }
  }
  return NULL;
}
