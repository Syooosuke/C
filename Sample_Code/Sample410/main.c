#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(int argc, char **argv) {
  int angle;
  double rad;
  printf("角度を入力してください（0〜360）:\n");
  scanf("%d", &angle);
  //度をラジアンに変換
  rad = (double)angle * PI / 180.0;
  //三角関数での計算
  printf("sin(%d) = %f\n", angle, sin(rad));
  printf("cos(%d) = %f\n", angle, cos(rad));
  printf("tan(%d) = %f\n", angle, tan(rad));
  return 0;
}
