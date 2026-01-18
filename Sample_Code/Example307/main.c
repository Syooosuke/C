#include<stdio.h>

int main(int argc, char **argv) {
//二次元配列の定義
int a[9][9];
int i, j;
//九九の表を作る
for(i=1; i<=9; i++){
  for(j=1; j<=9; j++){
    a[i-1][j-1] = i * j;
  }
}
//九九の表を表示する
for(i=1; i<=9; i++){
  for(j=1; j<=9; j++){
    //添字にするためには、i,jの値を一ずつひく
    printf("%dx%d=%2d ", i, j, a[i-1][j-1]);
  }
  //一行表示するごとに改行
  printf("\n");
}
  return 0;
}