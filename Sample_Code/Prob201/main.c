#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
  double r;
  printf("円の半径を入力：");
  scanf("%lf", &r);
  printf("面積:%lf 円周:%lf\n", M_PI * r * r, 2 * 3.14 * M_PI);
  return 0;
}