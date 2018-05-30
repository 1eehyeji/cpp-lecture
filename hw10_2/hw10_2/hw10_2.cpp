/*
파일명: hw10_2.cpp
작성자: 201632025 이혜지
작성일: 2018/05/09
내용: ==연산자를 오버로딩하여 Box객체의 부피를 비교하는 프로그램
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Box {
	double length;
	double width;
	double height;
	bool isEmpty;
public:
	Box(double w, double l, double h) : length{ l }, width{ w }, height{ h } {
		isEmpty = true;
	}
	Box() : length{ 0 }, width{ 0 }, height{ 0 } {
		isEmpty = true;
	}
	double getVolume() {
		return length * width*height;
	}
	void print() {
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl << endl;
	}
	friend bool operator==(const Box &ref1, const Box &ref2);
};

bool operator==(Box &ref1, Box &ref2) {
	return (ref1.getVolume() == ref2.getVolume());
}
int main()
{
	cout << "hw10_2: 이혜지" << endl;
	cout << endl;

	Box box1(10.0, 10.0, 10.0), box2(20.0, 20.0, 20.0);

	cout << "상자 #1" << endl;
	box1.print();

	cout << "상자 #2" << endl;
	box2.print();

	cout << "결과는? " << (box1 == box2) << endl;
}

