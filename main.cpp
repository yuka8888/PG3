#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

typedef void (*pFunc)(int *);
void DispResult(int* second);
void SetTimeout(pFunc timer, int second);

int main() {
	unsigned int currentTime = (unsigned int)time(nullptr);	srand(currentTime);

	//変数に関数を入れる
	pFunc dispResult = DispResult;

	int num = 0, num2 = rand() % 6 + 1;

	//1か2が入力されるまで無限ループ
	while (num != 1 && num != 2) {
		//値の入力
		printf("半なら1,丁なら2を入力してください\n");
		scanf_s("%d", &num);
	}

	//関数の呼び出し
	SetTimeout(dispResult, 3000);
	printf("サイコロの目は%d\n", num2);

	//ラムダ式で答えの出力
	auto result = [=]() {
		if ((num % 2) == (num2 % 2)) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}
		};

	//ラムダ式の呼び出し
	result();

	return 0;
}

//待った時間の出力
void DispResult(int* second) {
	printf("%d秒待った\n", *second / 1000);
}

//引数の時間分待つ関数
void SetTimeout(pFunc timer, int second) {
	Sleep(second);
	timer(&second);
}
