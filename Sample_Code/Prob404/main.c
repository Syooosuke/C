#include <stdio.h>
#include "triangle.h"

int main(int argc, char** argv){
  int num;
  printf("正の整数を入力:");
  scanf("%d", &num);
  if(num > 0){
    showTriangle(num);
  }
  else{
    printf("正の数を入力して下さい\n");
  }
  return 0;
}