#include "event.h"
/*
"�ѱ��Խ�", "�λ��", "����������",
"������", "������", "���ӿ����", "��Ź��� â��",
"1�� �߾Ӻ���"
"1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
"2�� �߾Ӻ���",
"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "2�ߴ� ������", "��Ź��� â��", "���� ������"
*/

// ��ȯ
// ���� �� �ؽ�Ʈ ���
void Event::current_room_event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	// 2�� ����
	if (room_name == "2�� ����") {
		// 2�� �߾Ӻ��� ���� �̺�Ʈ�� ���� ���� ���� ���
		if (!is_move_event.at("2�� �߾Ӻ���")) {
			Screen::print("[2�� ����]");
			Screen::print("�� �ָ� ���� �߾ӿ� ��� ��ü���� ���δ�.");
			Screen::print("���� ������ ��Ӱ� �������� ������ �ƴ� �� ����.");
			Screen::print("���ʿ��� �������� ���δ�.");
			Screen::print("�����ʿ��� ȭ��ǰ� ��Ź���� �ִ�.");
		}
		else {
			Screen::print("[2�� ����]");
			Screen::print("������ �� ����� �������� �Ƚ��ص� �� �� ����.");
			Screen::print("�����ʿ��� �������� ���δ�.");
			Screen::print("���ʿ��� ȭ��ǰ� ��Ź���� �ִ�.");
		}
	}
	// ȭ���
	else if (room_name == "ȭ���") {
		Screen::print("[ȭ���]");
		Screen::print("������ ������ �����Ѵ�.");
		Screen::print("���� ���� û�Ҹ� ���� ����̴�");
	}
	// ��Ź��
	else if (room_name == "��Ź��") {
		Screen::print("[��Ź��]");
		Screen::print("��Ź�� ���� �������� �״�� �׿��ִ�.");
		Screen::print("â�� ������ ������� ���ƴٴϴ� ����� ���δ�.");
	}
	// �ݸ� ��Ȱ��
	else if (room_name == "�ݸ� ��Ȱ��") {
		Screen::print("[�ݸ� ��Ȱ�� �� ����]");
		Screen::print("�ݸ� ��Ȱ�� ���̴�.");
		Screen::print("���� �������� ĭ���̰� ���� �ִ�.");
		Screen::print("������ ���� �������� ���δ�.");
	}
	// ���� ������
	else if (room_name == "���� ������") {
		Screen::print("[���� ������]");
		Screen::print("���� �������̴�.");
		Screen::print("�ſ� ������ 1�� �ݸ��������� ���� �� �� �ִ� ������.");
		Screen::print("������ ������ ������ �׿��ִ�.");
		Screen::print("�ڷγ� ���� ���� â��� ���Ǵ� �� ����.");
	}
	// 2�ߴ� ������
	else if (room_name == "2�ߴ� ������") {
		Screen::print("[2�ߴ� ������]");
		Screen::print("�ƹ� �α�ô�� �������� �ʴ´�.");
		Screen::print("��𼱰� ���� �Ҹ��� �۰� �鸰��.");
		Screen::print("...�籹�� ������ 6�� 14�Ϻ��� �������...");
		Screen::print("...���� ���� �����Ͽ� ������� ������ ����...");
		Screen::print("...���� �߿����� ȫõ������ ���� ����...");
		Screen::print("�ұ��� ������ ���...���� �������� �� �� ����.");
	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		Screen::print("[2�� �߾Ӻ���]");
		Screen::print("����� �� �̻� ������ �ʴ´�.");
		Screen::print("�̻��� �Ҹ��� �����ϸ� �ſ� ����ϴ�.");
		Screen::print("����ѿ���ѿ���ѿ����");
		Screen::print("��𼱰� �ݺ����� ������� ��� �鸰��.");
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
}

// Ž�� �̺�Ʈ
void Event::search_event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	if (is_search_event.at(room_name)) {
		Screen::line_print("���⼭ �� �̻� �� �� �ִ� ���� ���� �� ����..");
		return;
	}
	// 2�� ����
	if (room_name == "2�� ����") {
		// Ž�� �̺�Ʈ ����.
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}
	else if (room_name == "ȭ���") {
		Screen::print("[�η��� ��ɷ�]�� �߰��ߴ�.");
		Screen::line_print("����� ����� �� ���� �� ����.");
		player->get_bag()->insert_item("[�η��� ��ɷ�]");
	}
	else if (room_name == "��Ź��") {
		Screen::line_print("[������ ���� �õ� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[������ ���� �õ� ����]");
	}
	else if (room_name == "�ݸ� ��Ȱ��") {
		Screen::line_print("[ĭ���� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[ĭ���� ����]");
	}
	else if (room_name == "���� ������") {
		// Ž�� �̺�Ʈ X
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}
	else if (room_name == "2�ߴ� ������") {
		Screen::print("[*�� ����]�� �߰��ߴ�.");
		Screen::line_print("�ֱⰡ �Ǿ������� �۾��� ������ �� �Ⱥ��δ�.'...��'");
		player->get_bag()->insert_item("[���� ����]");
	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		// Ž�� �̺�Ʈ X
		Screen::line_print("���� ���� ������ �ʴ´�.");
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
	is_search_event[room_name] = true;
}


// �̺�Ʈ (���� ����)
void Event::event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();

	if (is_move_event.at(room_name)) {
		// �̵� �̺�Ʈ�� ����.
		return;
	}

	// 2�� ����
	else if (room_name == "2�� ����") {
		//ĭ���� �̺�Ʈ
		partition_event();
	}
	else if (room_name == "ȭ���") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "��Ź��") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "�ݸ� ��Ȱ��") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "2�ߴ� ������") {
		// �̵��̺�Ʈ X
	}else if (room_name == "���� ������") {

	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		// ���� �̺�Ʈ
		mid_way_2();
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
				�̵� �̺�Ʈ
***************************************************/
// ��ȯ
// ��Ʈ�� �̺�Ʈ
void Event::intro() {
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("2�� ������ �ض��� ������ �ٽ� �������� ���ƿԴ�.");
	Screen::line_print("���� �� ����(������ �ް�)�� ���İ��̾���.");
	Screen::line_print("�������� ���⿡ �ؾǹ����� KCTC�Ʒÿ��� ����� ������ ��ȸ�� ����.");
	Screen::line_print("�ҽ��� ���,,�󸶳� ���̸� ġ�� ������ �����ϸ� �԰��� �̼Ұ� ������ ���Դ�.");
	Screen::line_print("�Դٰ� �ڷγ� �ñ��� �ް��� �����ٿ��� �ݸ��� ���ϴ�, �� ���� �����ΰ�!");
	Screen::line_print("���ܰ��� 1�� �ݸ� ��Ȱ�� �ܻ��ٰ� �����̶��,,,��ٷ��� ��ȸ��..!");
	Screen::line_print("����>>");
	Screen::text_clear();

	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("�� �ð��̳� ��������,,,");
	Screen::line_print("��Һ��� ���� ǫ �� �Ͱ��� ������ ����̴�.");
	Screen::line_print("�ð踦 ���� ��ħ�� �̹� 7�� �Ѿ�� ������.");
	Screen::line_print("���� ���±��� ������ ������ ���� ���µ�,,,");
	Screen::line_print("��Ͱ� �����ؼ� ������ �ǵ��� 6�� 30�п� ���� �� �������� ������.");
	Screen::line_print("�ʹ� �����ϰ� ���̳�,,,");
	Screen::line_print("[�ƾƾƤ��ƾƾƾƾƤ��ƾƾƤ�����!]");
	Screen::line_print("��𼱰� ������ ��ħ�� ��ȭ�� ���� ��ī�ο� ����� ��ȴ�.");
	Screen::line_print("...???");
	Screen::line_print("������ ������ ���� ������ Ȯ���غ��߰ڴ�.");
	Screen::line_print("����>>");
	Screen::text_clear();

	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("���� ù ���� �׻� �ǰ��ϱ� ������ �ݹ� ���� ����� �� ����.");
	Screen::line_print("������ ���� �� ������ ������ ���� ���� ������ �ῡ�� �� �� ����.");
	Screen::line_print("���� ���÷��� �� �ۿ� �ִ� ��������� �����Ѵ�.");
	Screen::line_print("�ݸ� ������ ĭ���̷� �ܺηκ��� �����Ǿ��ִ�.");
	Screen::line_print("���� ������ ��Ҹ� ������ ���� ���Ƴ��� ��������,,,");
	Screen::line_print("���� �������� �ð����� ��ħ���� �� ���� ���� ��.");
	Screen::line_print("��ü�� �������� �����ϸ鼭�� ������� �����̴�.");
	Screen::line_print("���� �𸣰� �Ⱬ�� ������ �ణ �����ߴ�.");
	Screen::line_print("��,,,��,,�� �������� ������ ������,,���� ����");
	Screen::line_print("���� ���̰� �ٽ� ħ���� �ϱ� �β����� ��Ʈ���� ���� ���� ������.");
	Screen::line_print("����>>");
	Screen::text_clear();
}

//ĭ���� �̺�Ʈ
//ĭ���� ���踦 ������ ������ "2�� ����"���� �̵� ����
void Event::partition_event() {
	if (this->player->get_bag()->get_check_item("[ĭ���� ����]")) {
		Screen::print("öĿ��!");
		Screen::line_print("[ĭ���� ���踦] ����ߴ�.");
		player->get_bag()->delete_item("[ĭ���� ����]");
		Screen::print("������ �������� �����Ǵ� �Ҹ��� �Բ� ���� ������ ���ȴ�.");
		Screen::line_print("������ ������.");
		is_move_event["2�� ����"] = true;
	}
	else {
		Screen::print("���� �ڹ��谡 �ɷ��ִ�.");
		Screen::line_print("���踦 ã�ƺ���.");
		player->move(player->get_pre_room());
	}
}

// 2�� �߾Ӻ��� �̺�Ʈ(����)
void Event::mid_way_2() {
	if (!is_move_event.at("2�� �߾Ӻ���")) {
		Screen::print("[2�� �߾Ӻ���]");
		Screen::print("���� �߾ӿ� ���� ������ �ִ�.");
		Screen::print("�ͼ��� ���� ���δ�..");
		Screen::print("���� ����..��...����..?");
		Screen::print("�� �˵��� ����..��¼�� �̷���...");
		Screen::print("������ �ƴ� ô �� ���� ���� �� ����.");
		Screen::print("���ʿ��� ���� ���� ���縦 �˾�æ �� ����.");
	}
	Screen::clear();
	Screen::print("[1] �¼� �ο��.");
	Screen::print("[2] ��������");
	int input = Game::choose(2);
	// �¼� �ο��
	Screen::text_clear();
	if (input == 0) {
		Screen::print("����� �ΰ��̾��� ���� ���������� ����� �»��� ���� �� ����.");
		if (this->player->get_bag()->get_check_item("[�η��� ��ɷ�]")) {
			// ���� ����ħ, ��ɷ� �Ҹ�
			Screen::print("����� �̾��ϴ�..������ ��¿ �� ������.");
			Screen::print("[�η��� ��ɷ�]�� ������ ������.");
			Screen::print("��ɷ��� ���� ä�� ��������.");
			Screen::line_print("[�η��� ��ɷ�]�� �Ҿ���.");
			player->get_bag()->delete_item("[�η��� ��ɷ�]");
			Screen::print("�� �̻� �̵��� ����.");
			Screen::print("���� �ٸ� ������ �̵��ؾ� �� �� ����.");
		}
		else {
			// 2�� �������� ����, HP ����
			Screen::print("��,,,��,,,���� ���̴� ������ �� ����.");
			Screen::print("���� �� �� ���� �ƴϴ�.");
			Screen::print("�����̶� �������� �� �� ����.");
			Screen::line_print("������ 2�� �������� ������ �Դ�.");
			player->take_damage(5);
			player->move(_map->find_room("2�� ����"));
		}
	}
	// ��������.
	else if (input == 1) {
		Screen::print("�̰� ���� ����ġ�°� �ƴϴ�.");
		Screen::print("������ �����ϻ�.");
		Screen::print("�ƹ�ư �ƴϴ�.");
		Screen::clear();
		Screen::print("[1] 1������ ��������.");
		Screen::print("[2] 2�� �������� ��������.");
		int input = Game::choose(2);
		if(input == 0){
			player->move(_map->find_room("1�� �߾Ӻ���"));
		}
		else if (input == 1) {
			player->move(_map->find_room("2�� ����"));
		}
	}
	this->is_move_event["2�� �߾Ӻ���"] = true;
}