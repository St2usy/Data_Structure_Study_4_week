#pragma once
#include "Studnets.h"

class Node : public Student {
	Node* link;
public:
	Node(int id=0, string name="", string dept="")
		: Student(id, name, dept) // ������ �ʵ� 
	{
		link = NULL; // ��ũ �ʵ带 NULL�� �ʱ�ȭ �Ѵ�.
	}
	~Node(void) { }
	Node* getLink() { return link; } // link ���� �޾ƿ´�.
	void setLink(Node* p) { link = p; } // link ���� p�� �����Ѵ�.
};