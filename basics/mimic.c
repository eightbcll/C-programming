#include <stdio.h>
#include <string.h>


int main (void){
  char name[30];
  puts("Write something here: ");

  fgets(name , sizeof(name),stdin);
  name[strcspn(name,"\n")] = '\0';
  puts(name);
  return 0;
}
