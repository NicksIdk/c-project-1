#include "game.h"

int Game::getch() {
	int data;
	cin >> data;
	getchar();
	return data;
}

void Game::selection() {
	cout << "[1] �����ϱ�" << endl;
	cout << "[2] �̵��ϱ�" << endl;
	int input = 0;
	input = getch();
	if (input == 1) { // �����ϱ�
		selection_search();
	}
	else if (input == 2) { // �̵��ϱ�
		selection_move();
	}
	else {
		cout << "�߸��Է��߽��ϴ�."<< endl;
	}
}

void Game::selection_search() {

}

void Game::selection_move() {
	int input;
	this->player->get_print_move_room();
	cout << "�̵��� �� ��ȣ�� �Է��ϼ��� : ";
	input = getch();
	this->player->move(map->find_room(player->get_current_room()->get_link_room(input - 1)));
}