#include <stdio.h>
/*
  演算子を使った計算のプログラム
*/

int main(int argc, char **argv) {
  //各種演算
  printf("%d + %d = %d\n", 5, 2, 5 + 2);
  printf("%d - %d = %d\n", 5, 2, 5-2);
  printf("%d * %d = %d\n", 5, 2, 5*2);
  printf("%d / %d = %d 余り %d\n", 5, 2, 5/2, 5%2);
  return 0;
}
