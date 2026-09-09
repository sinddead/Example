#include <iostream>
int main() {
	double side, height;
	do {
		std::cout << "Enter side: ";
		std::cin >> side;

		if (std::cin.fail() || side <= 0) {
			std::cout << "It's not suitable number" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	} while (std::cin.fail() || side <= 0);
	do {
		std::cout << "Enter height: ";
		std::cin >> height;

		if (std::cin.fail() || height <= 0) {
			std::cout << "It's not suitable number" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	} while (std::cin.fail() || height <= 0);
	double area = (side * height) / 2.0;
	std::cout << "Area of the triangle is " << area << std::endl;
	return 0;
}