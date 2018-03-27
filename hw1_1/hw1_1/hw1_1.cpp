#include <iostream>


inline double calc_volume(double value) {
	double pi = 3.14;
	double result = (4.0 / 3.0) * pi * value * value * value;
	return result;
}

int main(void) {
	std::cout << "hw1_1: 이혜지" << std::endl;

	double value;

	std::cout << "구의 반지름: ";
	std::cin >> value;

	std::cout << "구의 부피 결과: " << calc_volume(value) << std::endl;
	return 0;
}