#include "event.h"
/*
"�ѱ��Խ�", "�λ��", "����������",
"������", "������", "���ӿ����", "��Ź��� â��",
"1�� �߾Ӻ���"
"1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
"2�� �߾Ӻ���",
"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "2�ߴ� ������", "��Ź��� â��"
*/

// �̺�Ʈ (���� ����)
void Event::event() {
	string room_name = this->player->get_current_room()->get_name();
	// 2�� ����
	if (room_name == "2�� ����") {
		//ĭ���� �̺�Ʈ
		partition_event();
	}
	else if (room_name == "ȭ���") {
		// �η��� ��ɷ�
	}
	else if (room_name == "��Ź��") {
		// ������ ���� �õ� ����
	}
	else if (room_name == "�ݸ� ��Ȱ��") {
		// ��� �߿��� ���̴� ����
	}
	else if (room_name == "2�ߴ� ������") {

	}
	else if (room_name == "��Ź��� â��") {

	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		// ����
	}




	else if (room_name == "1-1") {
		// ������
	}
	else if (room_name == "1-2") {
		// ��ä �ǻ�
	}
	else if (room_name == "1-3") {
		// ��Ű ���г�
	}
	else if (room_name == "2-1") {
		// �ͺ� ������
	}
	else if (room_name == "2-2") {
		// �ش�
	}
	else if (room_name == "2-3") {
		// �ռҵ���
	}


	
	// 1�� �߾Ӻ���
	else if (room_name == "�ѱ��Խ�") {

	}
	else if (room_name == "�λ��") {

	}
	else if (room_name == "����������") {

	}
	else if (room_name == "������") {

	}
	else if (room_name == "������") {

	}
	else if (room_name == "���ӿ����") {

	}
	else if (room_name == "��Ź��� â��") {

	}
}

/**************************************************
				�̺�Ʈ
***************************************************/
//ĭ���� �̺�Ʈ
//ĭ���� ���踦 ������ ������ "2�� ����"���� �̵� ����
void Event::partition_event() {
	Screen::clear();
	Screen::set(INIT_X, INIT_Y);
	Screen::gotoxy();
	if (this->player->get_bag()->get_check_item("[ĭ���� ����]")) {
		Screen::line_print("���� ���Ƚ��ϴ�.");
	}
	else {
		Screen::line_print("���谡 �ʿ��� �� ����.");
	}
}

