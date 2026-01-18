#include <stdio.h>

//関数
void func1();
void func2();

int main(int argc, char** argv) {
    void (*fp)() = NULL; //関数ポインタ変数の宣言
    fp = func1;
    fp();
    fp = func2;
    fp();
    return 0;
}

//関数１
void func1(){
  printf("func1\n");
}

//関数２
void func2(){
  printf("func2\n");
}