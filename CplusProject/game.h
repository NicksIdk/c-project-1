#pragma once
#include <iostream>
#include <string>

#include "player.h"
#include "map.h"
using namespace std;

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
	void selection_search(); // ���� ����
	void selection_move(); // �̵� ����
};