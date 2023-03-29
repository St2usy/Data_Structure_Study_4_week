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

	Node* current; // 최상위값

	Node start; // 최하위값

public:
	Stack();

	// 최상단에 새로운 원소를 추가한다.
	void push(Student s);

	// 최상단의 원소를 제거하고 반환한다.
	Student pop();

	// 최상단의 원소를 반환한다. (제거 안함)
	Student peek();

	// 스택이 비어있는지의 유무를 반환한다.
	bool is_empty();

	~Stack();

};