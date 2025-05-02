/* 523p ComplexFileWirte.c
#include <stdio.h>

int main(void) {
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf_s("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}

	fclose(fp);
	return 0;
}
*/

//
//#include <stdio.h>
//
//typedef struct fren
//{
//	char name[10];
//	char sex;
//	int age;
//} Friend;
//
//
//int main(void) {
//	FILE* fp;
//	Friend myfren1;
//	Friend myfren2;
//
//	/*file write*/
//	fp = fopen("friend.bin", "wb");
//	pritnf("이름, 성별, 나이 순 입력: ");
//	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//	fwirte((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//
//	/* file read*/
//	fp = fopen("friend.bin", "rb");
//	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
//	pritnf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age); 
//	fclose(fp); 
//
//	return 0;
//}/

//
//#include <stdio.h>
//int main(void) {
//
//	long fpos;
//	int i;
//
//	// 파일생성
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("1234-", fp);
//	fclose(fp);
//
//	// 파일 개방
//	fp = fopen("text.txt", "rt");
//	
//	for (i = 0; i < 4; i++) {
//		putchar(fgetc(fp));
//		fpos = ftell(fp);
//		fseek(fp, -1, SEEK_END);
//		putchar(fgetc(fp));
//		fseek(fp, fpos, SEEK_SET);
//	}
//
//	fclose(fp);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ptr1 = (int*)malloc(sizeof(int));
//	int* ptr2 = (int*)malloc(sizeof(int) * 7);
//	int i;
//
//	*ptr1 = 20;
//	for (i = 0; i < 7; i++)
//		ptr2[i] = i + 1;
//
//	printf("%d \n", *ptr1);
//	for (i = 0; i < 7; i++)
//		printf("%d ", ptr2[i]);
//
//	free(ptr1);
//	free(ptr2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//char* ReadUserName(void) {
//
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void) {
//
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1 : %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2 : %s \n", name2);
//
//	printf("again name1: %s \n", name1);
//	printf("again name2: %s \n", name2);
//
//	free(name1);
//	free(name2);
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(void) {
//	int n;
//	printf("strlen? :");
//	scanf("%d%*c", &n); //숫자입력받고 enter는 문자로 들어가는데 %*c가 그걸 무시해주겠다고 알려줌
//	char* ptr = (char*)malloc(sizeof(char) * (n+1)); //동적할당 줬음
//	
//	printf("input str: ");
//	scanf("%s", ptr); //동적할당한 문자열에 string입력받기
//
//	for (int i = n - 1; i < 0; i--)
//		printf("%c", ptr[i]);
//
//	free(ptr);
//
//	return 0;
//}

// 배열에 malloc, realloc하는 에제
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int capacity = 5;
//	int* arr = (int*)malloc(sizeof(int) * capacity); // 길이가 5인 배열 할당
//	
//	int cnt = 0;
//
//	while (1)
//	{
//		
//		int n = 0; //입력받을 정수 n 초기화 해줌
//		scanf("%d", &n);
//		if (n == -1) break; //n이 -1이면 탈출
//		
//		
//		if (cnt >= capacity) //배열이 capacity보다 커지면
//		{
//			capacity += 3; //capacity 3씩 늘려서
//			arr = (int*)realloc(arr, sizeof(int) * capacity ); // 배열 길이 재할당
//
//			if (arr == NULL) {
//				printf("fail to realloc\n");
//				return 1;
//			}
//		}
//
//		arr[cnt] = n;
//		cnt++;
//	}
//
//	for (int i = 0; i < cnt; i++)
//		printf("%d ", arr[i]);
//
//	free(arr);
//		
//	return 0;
//}

//p559. MacroConst.c

//#include <stdio.h>
//
//#define NAME "홍길동"
//#define AGE 24
//#define PRINT_ADDR puts("주소: 경기도 용인시\n");
//
//int main(void) {
//	
//	printf("이름: %s \n", NAME);
//	printf("나이 %d \n", AGE);
//	PRINT_ADDR;
//
//	return 0;
//}

#include <stdio.h>
// #degine STNUM(Y ,S, P) YSP
// #dfine STNUM(Y, S, P) Y S P 
#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))

int main (void){
	printf("학번 : %d \n", STNUM(10, 65, 175));
	printf("학번 : %d\n", STNUM(10, 65, 075));

	return 0;
}