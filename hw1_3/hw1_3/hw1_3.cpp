//***************************
// ���ϸ�: hw1_3.cpp
// �ۼ���: ������
// �ۼ���: 2018-03-27
// ����: �� ���� ������ �Է¹޾� ���� ū ��,
//		  ���� ���� ���� ��ȯ�ϴ� ���α׷�
//**************************
#include <iostream>

namespace myNs{
	int myMax(int num1, int num2, int num3);
	int myMin(int num1, int num2, int num3);
}

int myNs::myMax(int num1, int num2, int num3){
	if(num1 >= num2 && num1 >= num3) return num1;
	else if(num2 >= num1 && num2 >= num3) return num2;
	else return num3;
}

int myNs::myMin(int num1, int num2, int num3){
	if(num1 <= num2 && num1 <= num3) return num1;
	else if(num2 <= num1 && num2 <= num3) return num2;
	else return num3;
}

int main(void){
	std::cout<<"hw1_3: ������"<<std::endl;

	int num1, num2, num3;

	std::cout << "�� ���� ���� �Է����ּ���: " << std::ends;
	std::cin >> num1 >> num2 >> num3;

	std::cout << "�ִ밪: " << myNs::myMax(num1, num2, num3) << std::endl;
	std::cout << "�ּҰ�: " << myNs::myMin(num1, num2, num3) << std::endl;

	return 0;
}