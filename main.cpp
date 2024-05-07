﻿#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

typedef void (*pFunc)(int *);
void DispResult(int* second);
void SetTimeout(pFunc result, int second);

int main() {
	unsigned int currentTime = (unsigned int)time(nullptr);	srand(currentTime);

	//変数に関数を入れる
	pFunc result = DispResult;

	int num = 0, num2 = rand() % 6 + 1;

	//1か2が入力されるまで無限ループ
	while (num != 1 && num != 2) {
		//値の入力
		printf("半なら1,丁なら2を入力してください\n");
		scanf_s("%d", &num);
	}

	//関数の呼び出し
	SetTimeout(result, 5000);
	printf("サイコロの目は%d\n", num2);

	//答えの出力
	if ((num % 2) == (num2 % 2)) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

	return 0;
}

//待った時間の出力をする関数
void DispResult(int* second) {
	printf("%d秒待った\n", *second / 1000);
}

//引数の時間分待つ関数
void SetTimeout(pFunc result, int second) {
	Sleep(second);
	result(&second);
}
