#include <stdio.h>

int main(int argc, char **argv) {
  int a = 10;
  printf("数値を入力:\n");
  fflush(stdout);
  scanf("%d", &a);
  if (a > 0)
  {
    printf("入力した値は、正の数です。\n");
  }
  return 0;
}