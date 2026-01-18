#include <stdio.h>

int g = 10; //外部変数の宣言

void showExterns();

int main(int argc, char** argv){
  //値の表示
  printf("main関数:g=%d\n", g);
  showExterns();
  return 0;
}

void showExterns() {
  printf("showExterns関数:g=%d\n", g);
}