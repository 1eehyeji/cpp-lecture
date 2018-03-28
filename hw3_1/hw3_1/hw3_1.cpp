//***************************
// 파일명: hw3_1.cpp
// 작성자: 이혜지
// 작성일: 2018-03-28
// 내용: 멤버변수 : 속도, 현재기어
//		 멤버함수 :
//			초기화(initMembers) - 속도, 현재기어 정보를 입력
//			정보출력(print) - 속도, 현재기어 정보를 출력
//			속도증가(speedUp) - 속도를 1 증가하고 변경된 속도를 리턴
//			기어변속(changeGear) - 매개변수로 받은 값으로 기어를 변경
//		 를 포함한 클래스 만들고 실행해보기
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
	std::cout<<"hw3_1: 이혜지"<<std::endl;

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