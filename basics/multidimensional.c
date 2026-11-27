#include <stdio.h>
#define ROW 2
#define COL 3

int main(void){
  int arr[ROW][COL];

  int (*p)[3]=arr;

  for(int i = 0 ; i < ROW ; i++){
    for(int j = 0 ; j < COL; j++){
      scanf(" %d",(*(p+i)+j));
    }
}

  printf("Values: \n");
  for(int i = 0 ; i < ROW ; i++){
    for(int j = 0 ; j < COL; j++){
      printf("%d", *(*(p+i)+j));
    }
  }

  return 0;
}
