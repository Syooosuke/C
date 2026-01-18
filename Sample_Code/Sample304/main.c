#include <stdio.h>

// do~while文を使ったループ
int main(int argc, char **argv) {
  int i=0;
  do {
      printf("%d", i);
      i++;
  } while (i<=5);
  printf("\n");
    return 0;
}