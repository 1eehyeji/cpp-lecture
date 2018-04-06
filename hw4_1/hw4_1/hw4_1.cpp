//***************************
// 파일명: hw4_1.cpp
// 작성자: 이혜지
// 작성일: 2018-04-05
// 내용: 클래스Box를 다음과 같이 정의하고 이용하는 프로그램을 작성하시오
//***************************
#include <iostream>

class Box{
private:
	double height;
	double width;
	double length;
	bool empty;
public:
	Box(){
		setHeight(5.0);
		setWidth(5.0);
		setLength(5.0);
		setEmpty(true);
	}
	Box(double h, double w, double l, bool e)
	{
		setHeight(h);
		setWidth(w);
		setLength(l);
		setEmpty(e);
	}
	double getHeight();
	double getWidth();
	double getLength();
	bool getEmpty();
	void setHeight(double h);
	void setWidth(double w);
	void setLength(double l);
	void setEmpty(bool e);
	double getVolume();
};

double Box::getHeight(){
	return height;
}
double Box::getWidth(){
	return width;
}
double Box::getLength(){
	return length;
}
bool Box::getEmpty(){
	return empty;
}
double Box::getVolume(){
	return (this->height) * (this->width) * (this->length);
}

void Box::setEmpty(bool e){
	empty = e;
}
void Box::setHeight(double h){
	height = h;
}
void Box::setWidth(double w){
	width = w;
}
void Box::setLength(double l){
	length = l;
}

int main(void){

	std::cout<<"hw4_1:이혜지"<<std::endl;
	std::cout<<"========================================"<<std::endl;

	Box b1(3.5, 4.4, 5.0, false);
	Box b2, b3;

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	std::cout<<"박스 1 부피는 : "<<b1.getVolume()<<std::endl;
	std::cout<<"박스 2 부피는 : "<<b2.getVolume()<<std::endl;
	std::cout<<"박스 3 부피는 : "<<b3.getVolume()<<std::endl;
	
	std::cout<<"========================================"<<std::endl;

	if(b1.getVolume() >= b2.getVolume() && b1.getVolume() >= b3.getVolume()){
		std::cout<<"박스 1의 부피가 가장 큽니다 : "<<b1.getVolume()<<std::endl;
	}else if(b2.getVolume() >= b1.getVolume() && b2.getVolume() >= b3.getVolume()){
		std::cout<<"박스 2의 부피가 가장 큽니다 : "<<b2.getVolume()<<std::endl;
	}else{
		std::cout<<"박스 3의 부피가 가장 큽니다 : "<< b3.getVolume()<<std::endl;
	}

}