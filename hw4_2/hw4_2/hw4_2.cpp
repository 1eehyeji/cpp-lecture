/*********************
���ϸ�: hw4_2.cpp
�ۼ���: ������
�ۼ���: 2018-04-06
���ϳ���: Ŭ���� Television�� �ۼ��ϰ� �̿��ϴ� ���α׷�
**********************/
#include <string>
#include <iostream>
using namespace std;

class Television
{
	private:
		string name;
		int cost;
	public:
		Television(){
			name = "MyTV";
			cost = 0;
		}
		Television(string s){
			this-> Television::Television(s, 0);
		}
		Television(string s, int c){
			name = s;
			cost = c;
		}

		std::string getModel();
		int getCost();
		void setModel(string s);
		void setCost(int c);
		double getTax(double t);
		void discount();
		void discount(int b);
		void print();
};

string Television::getModel(){
	return name;
}
int Television::getCost(){
	return cost;
}

void Television::setModel(string s){
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

int main(void)
{
	cout<<"hw4_2: ������"<<endl;

	Television tv1;
	Television tv2("TV2");
	Television tv3("TV3", 1000000);

	tv1.print();
	tv2.print();
	tv3.print();

	tv3.discount(200000);
	tv3.discount();

	tv3.print();
}