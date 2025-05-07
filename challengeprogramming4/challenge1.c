#include <stdio.h>
#include <string.h>

typedef struct _bookinfo {
  char title[32];
  char author[32];
  int page;
} BookInfo;

int main(void)
{
  BookInfo info[10];

  for(int i = 0; i < 3; i++) {
    printf("저자 : ");
    scanf("%s%*c", info[i].author);
    printf("제목 : ");
    fgets(info[i].title, 32, stdin);
    info[i].title[strlen(info[i].title)-1] = '\0';
    printf("페이지수 : ");
    scanf("%d", &info[i].page);
  }

  printf("도서 정보 출력\n");
  for(int i = 0; i < 3; i++) {
    printf("book %d\n", i);
    printf("저자 : %s\n", info[i].author);
    printf("제목 : %s\n", info[i].title);
    printf("페이지수 : %d\n", info[i].page);
  }

  return 0;
}