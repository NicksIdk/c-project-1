#pragma once
#include <iostream>
#include <string>
#include "room.h"
#include "inventory.h"
#include "screen.h"

using namespace std;

/************************************************************************************

						�÷��̾� ����

************************************************************************************/

class Player {
	int hp;		//ü��
	int energy;	//���
	int damage; //���ݷ�
	Room* current_room; // ���� ��ġ�� ��
	Inventory* bag;	// ����
public:
	Player() {
		hp = 0;
		energy = 0;
		damage = 0;
		current_room = NULL;
		bag = NULL;
	}
	// set
	void set(Room* room); // �÷��̾� ����

	// get
	Room* get_current_room(); // ���� �� ��ġ get
	void get_print_move_room(); // �̵������� �� ���
	Inventory* get_bag() {	// ���� get
		return this->bag;
	}

	// ���
	void move(Room* room); // �� �̵�
};

