#include "StudentQueue.h"
int main() {
	StudentQueue que;
	que.enqueue(new Node(202219410, "��ö��", "�İ�"));
	que.enqueue(new Node(202219411, "���ع�", "��"));
	que.enqueue(new Node(202219412, "Ȳ����", "����"));
	que.display();
	delete que.dequeue();
	que.display();
}