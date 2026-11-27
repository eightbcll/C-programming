#include <stdio.h>
#define BUFFER 50
int main(void){
  char name[BUFFER];
  int ch , i = 0;

  while((ch = getchar()) != '\n' && ch != EOF && i < BUFFER-1){
    name[i] = ch;
    i++;
  }
  name[i] = '\0';
  puts(name);
  return 0;
}
