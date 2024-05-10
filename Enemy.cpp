#include "Enemy.h"

void (Enemy::* Enemy::stateTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal
};

void Enemy::Approach()
{
	printf("接近中\n");
}

void Enemy::Shooting()
{
	printf("射撃中\n");
}

void Enemy::Withdrawal()
{
	printf("離脱中\n");
}

void Enemy::Update(int state) {
	//メンバ関数の実行
	(this->*stateTable[state])();
}
