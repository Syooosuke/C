#include <stdio.h>

//n個の★を表示
void showStars(int n){
  int i;
  for(i=0; i<n; i++){
    printf("★");
  }
  printf("\n");
}
//★で三角形を作る
void showTriangle(int n){
  int i;
  for (i=1; i<=n; i++){
    showStars(i);
  }
}