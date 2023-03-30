#include "StudentQueue.h"
int main() {
	StudentQueue que;
	que.enqueue(new Node(202219410, "신철언", "컴공"));
	que.enqueue(new Node(202219411, "이준범", "댄스"));
	que.enqueue(new Node(202219412, "황승준", "무직"));
	que.display();
	delete que.dequeue();
	que.display();
}