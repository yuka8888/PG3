#include <stdio.h>
#include "Enemy.h"

int main(void) {
	Enemy* enemy = new Enemy;

	//関数の呼び出し
	for (int i = 0; i < 3; i++) {
		enemy->Update(i);
	}
}
