#pragma once
#include <iostream>
#include <string>

using namespace std;
// "[ĭ���� ����]","[�η��� ��ɷ�]","[������ ���� �õ� ����]","[���� ����]","[������]",
//"[��ä �ǻ�]" ,"[��Ű ���г�]","[�ش�]","[�ͺ� ������]","[�� �ҵ���]","[�ѱ��� Ű]",
//"[���ӿ���� ����]","[���Ѱ� ź����]","[K2 ����]","[��Ʈ�ϰ� ���� ��Ʈ]","[��� �߿��� ���̴� ����]"

/******************************************

			������ ����

*******************************************/
class Item {
	string name; // �̸�
	Item* link; // ���� ������(�κ��丮���� ���Ḯ��Ʈ�� ã�� ����.)
public:
	Item() : Item("None"){}
	Item(string name) {
		this->name = name;
		this->link = NULL;
	}

	void set_link(Item* link) {
		this->link = link;
	}

	string get_name() {
		return this->name;
	}

	Item* get_link() {
		return this->link;
	}
};