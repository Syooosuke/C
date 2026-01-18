#include <stdio.h>

//while文を使ったループ
int main(int argc, char **argv) {
  int i=0;
  while (i<=5){
      printf("%d", i);
      i++;
  }
  printf("\n");
    return 0;
}