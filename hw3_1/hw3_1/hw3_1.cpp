//***************************
// ���ϸ�: hw3_1.cpp
// �ۼ���: ������
// �ۼ���: 2018-03-28
// ����: ������� : �ӵ�, ������
//		 ����Լ� :
//			�ʱ�ȭ(initMembers) - �ӵ�, ������ ������ �Է�
//			�������(print) - �ӵ�, ������ ������ ���
//			�ӵ�����(speedUp) - �ӵ��� 1 �����ϰ� ����� �ӵ��� ����
//			����(changeGear) - �Ű������� ���� ������ �� ����
//		 �� ������ Ŭ���� ����� �����غ���
//***************************
#include <iostream>

class Car{
private:
	int speed;
	int gear;

public:
	void initMembers(int s, int g){
		speed = s;
		gear = g;
	}
	void print(){
		std::cout<<"speed: "<<speed<<" "<<std::ends;
		std::cout<<"gear: "<<gear<<std::endl;
	}
	int speedUp(){
		++speed;
		return speed;
	}
	void changeGear(int g){
		gear = g;
	}
};

int main(void){
	std::cout<<"hw3_1: ������"<<std::endl;

	Car myCar;

	myCar.initMembers(0, 1);
	myCar.print();

	for(int i = 0; i<20; ++i){
		myCar.speedUp();
	}
	myCar.print();

	myCar.changeGear(2);
	myCar.print();

	for(int i = 0; i<20; ++i){
		myCar.speedUp();
	}
	myCar.print();
}