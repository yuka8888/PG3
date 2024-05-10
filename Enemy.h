#pragma once
#include <stdio.h>

class Enemy
{
public:

	/// <summary>
	/// 接近
	/// </summary>
	void Approach();

	/// <summary>
	/// 射撃
	/// </summary>
	void Shooting();

	/// <summary>
	/// 離脱
	/// </summary>
	void Withdrawal();

	/// <summary>
	///アップデート
	/// </summary>
	void Update(int state);
private:
	//メンバ関数ポインタのテーブル
	static void (Enemy::*stateTable[3])();
};

