#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  //ファイルポインタ(読み込み用)
  FILE* file;
  //読み込む文字のコード
  int c;
  //ファイルを読み込む用にオープン(開く)
  file = fopen("c:¥¥test¥¥sample.txt", "r");
  if(file == NULL){
    //オープンに失敗した場合異常終了
    printf("ファイル開けません。\n");
    return 1;
  }
  //ファイルのデータ読み込む
  while ((c = fgetc(file))!=EOF){
    printf("%c", (char)c);
  }
  //ファイルをクローズする(閉じる)
  fclose(file);
  return 0;
}