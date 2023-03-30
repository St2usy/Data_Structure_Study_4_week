#pragma once
#include <iostream>
class Node {
	Node* link;
	int data;
public:
	Node(int data=0)
		: data(data)
	{
		link = NULL;
	}
	Node* getLink() { return link; }
	void setLink(Node* next) { link = next; }
	void display() {
		std::cout << " " << data;
	}
};