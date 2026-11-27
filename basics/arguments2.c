#include <stdio.h>

int main (int argc , char *argv[]){
  if(argc < 2){
    printf("Wrong usage. ./main <name>\n");
    return 1;
  }

  printf("Hello!, %s", argv[1]);

  return 0;
}
