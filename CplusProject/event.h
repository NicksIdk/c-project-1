#pragma once

#include <iostream>
#include <string>

using namespace std;

#include "player.h"

/************************************************************************************

						�̺�Ʈ ����

************************************************************************************/


class Event {
	Player* player; // �÷��̾� ����
public:
	// set
	// �÷��̾� ���� ��������
	void set(Player* player) {
		this->player = player;
	}

	// �̺�Ʈ (���� ����)
	void event();

	// �̺�Ʈ (���ǿ� �´� �̺�Ʈ ��������)
	// ĭ���� �̺�Ʈ
	void partition_event();

};