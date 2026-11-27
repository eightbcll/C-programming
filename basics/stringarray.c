#include <stdio.h>

int main (void){
  char names[5][20];
  
  for(int i = 0 ; i < 5 ; i++){
    printf("Enter a name: ");
    scanf("%19s", names[i]);
  }
  
  for(int i = 0 ; i < 5 ; i++){
    printf("%s\n", names[i]);
  }
  return 0;
}
