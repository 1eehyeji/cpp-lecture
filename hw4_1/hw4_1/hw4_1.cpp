//***************************
// ���ϸ�: hw4_1.cpp
// �ۼ���: ������
// �ۼ���: 2018-04-05
// ����: Ŭ����Box�� ������ ���� �����ϰ� �̿��ϴ� ���α׷��� �ۼ��Ͻÿ�
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

	std::cout<<"hw4_1:������"<<std::endl;
	std::cout<<"========================================"<<std::endl;

	Box b1(3.5, 4.4, 5.0, false);
	Box b2, b3;

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	std::cout<<"�ڽ� 1 ���Ǵ� : "<<b1.getVolume()<<std::endl;
	std::cout<<"�ڽ� 2 ���Ǵ� : "<<b2.getVolume()<<std::endl;
	std::cout<<"�ڽ� 3 ���Ǵ� : "<<b3.getVolume()<<std::endl;
	
	std::cout<<"========================================"<<std::endl;

	if(b1.getVolume() >= b2.getVolume() && b1.getVolume() >= b3.getVolume()){
		std::cout<<"�ڽ� 1�� ���ǰ� ���� Ů�ϴ� : "<<b1.getVolume()<<std::endl;
	}else if(b2.getVolume() >= b1.getVolume() && b2.getVolume() >= b3.getVolume()){
		std::cout<<"�ڽ� 2�� ���ǰ� ���� Ů�ϴ� : "<<b2.getVolume()<<std::endl;
	}else{
		std::cout<<"�ڽ� 3�� ���ǰ� ���� Ů�ϴ� : "<< b3.getVolume()<<std::endl;
	}

}