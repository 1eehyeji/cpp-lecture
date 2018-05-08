/*****************
�ۼ���: ������
�ۼ���: 2018.04.17
���ϸ�: hw6_2.cpp
���ϳ���: friend ����� ������������ ��������� ���� �����Ͽ� ��ü ������ ����Ѵ�.
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
			cout<<"�𵨸�: "<<tv.name<<" ����: "<<tv.cost<<endl;
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
	cout<<"�𵨸�: "<<name<<"  "<<"����: "<<cost<<endl;
}

int main(void){
	cout<<"hw6_2: ������"<<endl;

	Television tv1;
	Television tv2("TV2");
	Television tv3("TV3", 100);

	showTvInfo(tv1);
	showTvInfo(tv2);
	showTvInfo(tv3);
}