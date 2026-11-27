#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  const char *file = "/home/voldermort/Documents/cpro/c-journey/file.c";
  const char *buffer = "Where we at with it";

  FILE* fp = fopen( file, "w+" );
  if(!fp){
    perror("Failure to open file");
    exit(1);
  }
  fputs( buffer , fp);
  fclose(fp);
  
}
