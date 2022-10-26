#include "game.h"

int Game::getch() {
	int data;
	cin >> data;
	getchar();
	return data;
}


void Game::selection() {
	Screen::clear();
	Screen::set(INIT_X, INIT_Y);
	Screen::gotoxy();
	Screen::print("[1] �����ϱ�");
	Screen::print("[2] �̵��ϱ�");
	int input = 0;
	input = choose(2);
	if (input == 0) { // �����ϱ�
		selection_search();
	}
	else if (input == 1) { // �̵��ϱ�
		selection_move();
	}
}

int Game::choose(int max) {
	int input = 0;
	int x = INIT_X - 1, y = INIT_Y;
	while (true) {
		Screen::set(x, y);
		Screen::gotoxy();
		cout << ">";
		int key = Screen::KeyIn();
		if (key == ENTER)
			return input;
		else if (key == UP && Screen::get_y() > INIT_Y) {
			Screen::gotoxy();
			cout << " ";
			y--;
			input--;
		}
		// ��ũ �� ������ �Ѿ������ �ȵ�
		else if (key == DOWN && Screen::get_y() < INIT_Y+max-1) {
			Screen::gotoxy();
			cout << " ";
			y++;
			input++;
		}
	}
}

void Game::selection_search() {

}

void Game::selection_move() {
	Screen::clear();
	Screen::set(INIT_X, INIT_Y);
	Screen::gotoxy();
	this->player->get_print_move_room();

	int max = player->get_current_room()->get_link_size(); // ��ũ �� ���� ���ϱ�
	if (player->get_current_room()->check_parent_room()) max++; // �θ� �� ������ +1

	int input = choose(max);
	this->player->move(map->find_room(player->get_current_room()->get_link_room(input)));
}
