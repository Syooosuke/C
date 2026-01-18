#include "studentDatabase.h"
#include <string.h>

#define MESSAGE LENGTH 256

//データベースに登録されている学生の数
int num_of_student = 0;
//学生のデータベース
static student student_database[MAX_STUDENT];
//エラーメッセージ
int Error = MESSAGE_OK;

//データベースの初期化
void initDatabase(){
  int i;
  for (i=0; i < MAX_STUDENT; i++){
    student_database[i].id = -1;
    strcpy(student_database[i].name, "");
  }
  Error = MESSAGE_OK; //エラーメッセージのクリア
  num_of_student = 0; //登録された学生の数を0に初期化
}

//データベースへのデータの登録(学生番号、名前)
int add(int id, char* name){
  //すでに登録されているidであれば、登録しない
  if(get(id) == NULL && num_of_student < MAX_STUDENT){
    student_database[num_of_student].id = id;
    strcpy(student_database[num_of_student].name, name);
    num_of_student++;
    Error = MESSAGE_OK;
    //登録できたら、１を返す
    return 1;
  }
  Error = MESSAGE_ERROR;
  //登録できなければ、0を返す
  return 0;
}
//学生のデータの取得
student* get(int id) {
  int i;
  for (i=0; i < num_of_student; i++){
    //該当するidのデータが見つかったら
    if(student_database[i].id ==id){
      return &student_database[i]; //ポインタを返す
    }
  }
  return NULL;
}