#include "event.h"


// �̺�Ʈ (���� ����)
void Event::event() {
	//ĭ���� �̺�Ʈ
	if (this->player->get_current_room()->get_name() == "2�� ����") {
		partition_event();
	}
}

/**************************************************
				�̺�Ʈ
***************************************************/
//ĭ���� �̺�Ʈ
//ĭ���� ���踦 ������ ������ "2�� ����"���� �̵� ����
void Event::partition_event() {
	if (this->player->get_bag()->get_check_item("[ĭ���� ����]")) {
		cout << "���� ���Ƚ��ϴ�." << endl;
	}
	else {
		cout << "���谡 �ʿ��� �� ����." << endl;
	}
}