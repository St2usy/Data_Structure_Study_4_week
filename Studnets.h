#pragma once
#include <iostream>
#include <string>
#pragma warning(disable:4996)
using std::string;

class Student {
protected:
	int id;
	string name;
	string dept;
public:
	Student()
		: id(0), name(NULL), dept(NULL) {}
	Student(int id, string name, string dept)
		: id(id), name(name), dept(dept)
	{}
	void display() {
		std::cout << "�й� : " << id << " " << "�̸� : " << name << " " << "�а� : " << dept << " " << std::endl;
	}
	~Student() {}
};