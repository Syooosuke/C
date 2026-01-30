#include <stdio.h>

int main(int argc, char** argv){
  int a, b;
  printf("一つ目の数値：");
  scanf("%d", &a);
  printf("二つ目の数値：");
  scanf("%d", &b);
  printf("%d + %d = %d\n", a, b, a+b);
  printf("%d - %d = %d\n", a, b, a-b);
  printf("%d * %d = %d\n", a, b, a*b);
  if(b!=0){
    //二つ目の数が0でなければ、割り算を行う
    printf("%d/%d=%d\n", a, b, a/b);
  }
  else{
    //二つ目の数が０ならば、割り算ができないと表示
    printf("0で割り切ることはできません\n");
  }
  return 0;
}