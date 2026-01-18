#include <stdio.h>

//無限ループからbreak文で抜け出す
int main(int argc, char **argv) {
  int num;
  printf("負の値で、ループから抜けます。\n");
  while(1){
    printf("数値を入力:\n");
    scanf("%d", &num);
    if(num<0){
      //ループから抜ける処理
      break;
    }
  }
  printf("終了\n");
    return 0;
    }