#include <iostream>
#include <Triangle.h>

int main() {
	double side, height, area;
	Triangle t;
	do {
		std::cout << "Enter side: ";
		std::cin >> side;

		if (std::cin.fail() || side <= 0) {
			std::cout << "It's not suitable number" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	} while (std::cin.fail() || side <= 0);
	t.setSide(side);
	do {
		std::cout << "Enter height: ";
		std::cin >> height;

		if (std::cin.fail() || height <= 0) {
			std::cout << "It's not suitable number" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	} while (std::cin.fail() || height <= 0);
	t.setHeight(height);
	area=t.calculateArea();
	std::cout << "Area of the triangle is " << area << std::endl;
	return 0;
}

