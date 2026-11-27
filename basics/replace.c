#include <stdio.h>
#include <string.h>

int main(void){
  char name[20];
  strcpy(name , "Lewiz");
  //changing the z at the end
  char *p = name+4;
  *p = 's';
  printf("%s", name);
  return 0;
}
