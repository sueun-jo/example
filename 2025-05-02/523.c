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
		printf("�̸� ���� ���� �� �Է�: ");
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
//	pritnf("�̸�, ����, ���� �� �Է�: ");
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
//	// ���ϻ���
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("1234-", fp);
//	fclose(fp);
//
//	// ���� ����
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
//	scanf("%d%*c", &n); //�����Է¹ް� enter�� ���ڷ� ���µ� %*c�� �װ� �������ְڴٰ� �˷���
//	char* ptr = (char*)malloc(sizeof(char) * (n+1)); //�����Ҵ� ����
//	
//	printf("input str: ");
//	scanf("%s", ptr); //�����Ҵ��� ���ڿ��� string�Է¹ޱ�
//
//	for (int i = n - 1; i < 0; i--)
//		printf("%c", ptr[i]);
//
//	free(ptr);
//
//	return 0;
//}

// �迭�� malloc, realloc�ϴ� ����
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int capacity = 5;
//	int* arr = (int*)malloc(sizeof(int) * capacity); // ���̰� 5�� �迭 �Ҵ�
//	
//	int cnt = 0;
//
//	while (1)
//	{
//		
//		int n = 0; //�Է¹��� ���� n �ʱ�ȭ ����
//		scanf("%d", &n);
//		if (n == -1) break; //n�� -1�̸� Ż��
//		
//		
//		if (cnt >= capacity) //�迭�� capacity���� Ŀ����
//		{
//			capacity += 3; //capacity 3�� �÷���
//			arr = (int*)realloc(arr, sizeof(int) * capacity ); // �迭 ���� ���Ҵ�
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
//#define NAME "ȫ�浿"
//#define AGE 24
//#define PRINT_ADDR puts("�ּ�: ��⵵ ���ν�\n");
//
//int main(void) {
//	
//	printf("�̸�: %s \n", NAME);
//	printf("���� %d \n", AGE);
//	PRINT_ADDR;
//
//	return 0;
//}

#include <stdio.h>
// #degine STNUM(Y ,S, P) YSP
// #dfine STNUM(Y, S, P) Y S P 
#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))

int main (void){
	printf("�й� : %d \n", STNUM(10, 65, 175));
	printf("�й� : %d\n", STNUM(10, 65, 075));

	return 0;
}