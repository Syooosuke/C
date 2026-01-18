#include <stdio.h>

//文字列の長さを求める
int my_strlen(char*);

int main(int argc, char** argv) {
  char str[256];
  int length;
  printf("文字列を入力:");
  scanf("%s", str);
  length = my_strlen(str);
  printf("文字列の長さ:%d\n", length);
  return 0;
}

int my_strlen(char* s) {
  int length = 0;
  //文字列の長さを求める
  while (*s != '\0') {
    //'\0'にたどり着くまでカウントを続ける
    length++;
    s++;
  }
  return length;
}