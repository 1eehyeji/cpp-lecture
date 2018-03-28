//***************************
// 파일명: hw1_3.cpp
// 작성자: 이혜지
// 작성일: 2018-03-27
// 내용: 세 개의 정수를 입력받아 가장 큰 수,
//		  가장 작은 수를 반환하는 프로그램
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
	std::cout<<"hw1_3: 이혜지"<<std::endl;

	int num1, num2, num3;

	std::cout << "세 개의 값을 입력해주세요: " << std::ends;
	std::cin >> num1 >> num2 >> num3;

	std::cout << "최대값: " << myNs::myMax(num1, num2, num3) << std::endl;
	std::cout << "최소값: " << myNs::myMin(num1, num2, num3) << std::endl;

	return 0;
}