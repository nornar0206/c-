#include <iostream>

int main(){
	int num1, num2;
	static int num3=10;
	const float num4=1093;

	std::cout << "Input num1: ";
	std::cin >> num1;
	std::cout << "Input num2: ";
	std::cin >> num2;
	
	std::cout << "num1:" << num1 << std::endl << "num2:" << num2  << std::endl << "num3:" << num3  << std::endl << "num4:" << num4 << std::endl;

	std::cout << "Input num1: ";
	std::cin >> num1;
	std::cout << "Input num2: ";
	std::cin >> num2;
	std::cout << "Input num3: ";
	std::cin >> num3;
	//std::cout << "Input num4: ";
	//std::cin >> num4;
	
	std::cout << "num1:" << num1 << std::endl << "num2:" << num2  << std::endl << "num3:" << num3  << std::endl << "num4:" << num4 << std::endl;

	return 0;
}
