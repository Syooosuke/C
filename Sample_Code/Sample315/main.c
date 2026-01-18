#include <stdio.h>

//文字の扱い
int main(int argc, char **argv) {
  char s1[4] = {'a', 'b', 'c', '\0'};//文字列"abc"
  char s2[] = "HelloWorld";//文字列"HelloWorld"
  char s3[100];//文字列を格納する配列
  //文字列の入力
  printf("文字列を入力してください:\n");
  scanf("%s", s3);//文字列の入力
  printf("s1=%s\n", s1);
  printf("s2=%s\n", s2);
  printf("s3=%s\n", s3);
    return 0;
}