#include <iostream>

int main(){
	int i;
	std::string str;

	std::cout << "Enter an Integer: ";
	std::cin >> i;
	std::cout << "Enter a String: ";
	std::cin >> str;

	std::cout << "You Entered:" << i << "," << str << std::endl;
	return 0;
}
