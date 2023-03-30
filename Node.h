#pragma once
#include "Studnets.h"

class Node : public Student {
	Node* link;
public:
	Node(int id=0, string name="", string dept="")
		: Student(id, name, dept) // 데이터 필드 
	{
		link = NULL; // 링크 필드를 NULL로 초기화 한다.
	}
	~Node(void) { }
	Node* getLink() { return link; } // link 값을 받아온다.
	void setLink(Node* p) { link = p; } // link 값을 p로 설정한다.
};