/*****************
작성자: 이혜지
작성일: 2018.04.17
파일명: hw6_2.cpp
파일내용: friend 선언된 전역변수에서 멤버변수에 직접 접근하여 객체 정보를 출력한다.
*****************/
#include "stdafx"
#include <iostream>
using namespace std;

class Television{
	private:
		int cost;
		char * name;
	public:
		static int numberOfTVs;

		Television(){
			name = "MyTV";
			cost = 0;
			++numberOfTVs;
		}
		Television(char * s){
			this-> Television::Television(s, 0);
		}
		Television(char * s, int c){
			name = s;
			cost = c;
			++numberOfTVs;
		}
		Television(const Television& copy){
			name = copy.name;
			cost = copy.cost;
		}

		char * getModel();
		int getCost();
		void setModel(char * s);
		void setCost(int c);
		double getTax(double t);
		void discount();
		void discount(int b);
		void print();
		static int getNumberOfTVs(){
			return Television::numberOfTVs;
		};
		friend void showTvInfo(Television tv){
			cout<<"모델명: "<<tv.name<<" 가격: "<<tv.cost<<endl;
		}
};

int Television::numberOfTVs = 0;


char * Television::getModel(){
	return name;
}
int Television::getCost(){
	return cost;
}

void Television::setModel(char * s){
	name = s;
}
void Television::setCost(int c){
	cost = c;
}

double Television::getTax(double t){
	return cost * t;
}

void Television::discount(){
	cost = cost - (cost * 0.1);
}
void Television::discount(int a){
	cost = cost - a;
}
void Television::print(){
	cout<<"모델명: "<<name<<"  "<<"가격: "<<cost<<endl;
}

int main(void){
	cout<<"hw6_2: 이혜지"<<endl;

	Television tv1;
	Television tv2("TV2");
	Television tv3("TV3", 100);

	showTvInfo(tv1);
	showTvInfo(tv2);
	showTvInfo(tv3);
}