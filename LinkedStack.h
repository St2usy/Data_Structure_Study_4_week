#pragma once
#include <iostream>
#include "Node.h"
class LinkedStack {
	Node* top; // 헤더 포인터.
public:
	LinkedStack() { top = NULL; }
	~LinkedStack() { while (!isEmpty()) delete pop(); }
	bool isEmpty() { return top == NULL; }
	void push(Node* p) {
		if (isEmpty()) { top = p; }
		else {
			p->setLink(top);
			top = p;
		}
	}
	Node* pop() {
		if (isEmpty()) return NULL;
		else {
			Node* p = top;
			top = top->getLink();
			return p;
		}
	}
	Node* peek() { return top; }
	void display() {
		std::cout << "[LinkedStack]" << std::endl;
		for (Node* p = top; p != NULL; p = p->getLink())
			p->display();
		std::cout << std::endl;
	}
};