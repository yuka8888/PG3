#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

typedef void (*pFunc)(int *);
void DispResult(int* s);
void SetTimeout(pFunc p, int second);

int main() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);

	pFunc p = DispResult;

	int num = 0, num2 = rand() % 6 + 1;

	printf("半なら1,丁なら2を入力してください\n");
	scanf_s("%d", &num);

	SetTimeout(p, 5);
	printf("サイコロの目は%d", num2);

	if ((num % 2) == (num2 % 2)) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

	return 0;
}

void DispResult(int* s) {
	printf("%d秒待った\n", *s);
}

void SetTimeout(pFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}
