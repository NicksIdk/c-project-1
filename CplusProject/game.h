#pragma once
#include <iostream>
#include <string>

#include "player.h"
#include "map.h"
#include "define.h"
#include "screen.h"
using namespace std;

/******************************************

			���� �ý���

*******************************************/

class Game {
	Player* player;
	Map* map;
public:
	void set(Player* player, Map* map) {
		this->player = player;
		this->map = map;
	}
	int getch(); // �Է¹ް� ���� ����

	void selection(); // ������
	int choose(int max);
	void selection_search(); // ���� ����
	void selection_move(); // �̵� ����

};