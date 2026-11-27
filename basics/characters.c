//understandinh how pointers work with characters

#include <stdio.h>

int main (void){
  char word[20] ="computer";
  char *p = word;

  printf("%c\n", *p); //c
  printf("%s\n", p);  //computer
  printf("%s\n", (p+3)); //puter
  printf("%c\n", *(p+3)); //address

  return 0;
}
