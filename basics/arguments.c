#include <stdio.h>

int main(int argc , char *argv[]){
  printf("Argument count is : %d\n",argc);
  for(int i = 0 ; i < argc ; i++){
    printf("Arguments are %d: %s\n", i ,argv[i]);
  }
  return 0;
}

