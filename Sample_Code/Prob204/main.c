#include <stdio.h>

int main(int argc, char** argv){
  int month;
  printf("月(1~12)の値を入力して下さい：");
  //月を入力
  scanf("%d", &month);
  switch(month){
    case 12:
    case 1:
    case 2:
    printf("冬です。\n");
    break;
    case 3:
    case 4:
    case 5:
    printf("春です。\n");
    break;
    case 6:
    case 7:
    case 8:
    printf("夏です。\n");
    break;
    case 9:
    case 10:
    case 11:
    printf("秋です。\n");
    break;
    default:
    printf("不適切な値です\n");
    break;
  }
return 0;
}