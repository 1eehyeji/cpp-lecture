#include <iostream>


inline double calc_volume(double value) {
	double pi = 3.14;
	double result = (4.0 / 3.0) * pi * value * value * value;
	return result;
}

int main(void) {
	std::cout << "hw1_1: ������" << std::endl;

	double value;

	std::cout << "���� ������: ";
	std::cin >> value;

	std::cout << "���� ���� ���: " << calc_volume(value) << std::endl;
	return 0;
}