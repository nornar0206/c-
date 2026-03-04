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

	//상수는 입력을 받으려는 시도를 하면 컴파일 단계에서 오류를 발생시킨다.
	//static은 선언된 위치에 상관없이 프로그램의 시작부터 끝까지 살아있는다.
	//변수의 자료형으로는 (2byte)(signed)short, unsigned short / (4byte)(signed)int, unsigned int, (signed)long, unsigned long / (8byte) unsigned long long / (4byte) float / (8byte) double, long double / (1byte) (signed)char, unsigned char, bool, string이 있음. 

	return 0;
}
