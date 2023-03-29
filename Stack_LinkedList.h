#pragma once
#pragma once
#include <string>
#include "Studnets.h"
using std::string;

class Stack
{
	struct Node
	{
		Node* prev;
		Student s;

		Node(Node* prev, Student s)
			:prev(prev), s(s)
		{}
	};

	Node* current; // �ֻ�����

	Node start; // ��������

public:
	Stack();

	// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
	void push(Student s);

	// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
	Student pop();

	// �ֻ���� ���Ҹ� ��ȯ�Ѵ�. (���� ����)
	Student peek();

	// ������ ����ִ����� ������ ��ȯ�Ѵ�.
	bool is_empty();

	~Stack();

};