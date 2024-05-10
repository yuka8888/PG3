#include <stdio.h>
#include "Enemy.h"

int main(void) {
	Enemy* enemy = new Enemy;

	for (int i = 0; i < 3; i++) {
		enemy->Update(i);
	}
}
