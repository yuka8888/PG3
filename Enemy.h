#pragma once
#include <stdio.h>

class Enemy
{
public:

	/// <summary>
	/// �ڋ�
	/// </summary>
	void Approach();

	/// <summary>
	/// �ˌ�
	/// </summary>
	void Shooting();

	/// <summary>
	/// ���E
	/// </summary>
	void Withdrawal();

	/// <summary>
	///�A�b�v�f�[�g
	/// </summary>
	void Update(int state);
private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::*stateTable[3])();
};

