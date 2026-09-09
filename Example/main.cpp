#include <iostream>

class Triangle {
private:
	double _side;
	double _height;

public:
	Triangle(double side=1, double height=1);
	double calculateArea() const;
	double getSide() const;
	double getHeight() const;
	void setSide(double side);
	void setHeight(double height);
};

Triangle::Triangle(double side, double height) {
	setSide(side);
	setHeight(height);
}

double Triangle::calculateArea() const {
	return (_side * _height) / 2.0;
}

double Triangle::getSide() const {
	return _side;
}

double Triangle::getHeight() const {
	return _height;
}

void Triangle::setSide(double side) {
	if (side <= 0) {
		throw std::logic_error("Side must be positive");
	}
	_side = side;
}

void Triangle::setHeight(double height) {
	if (height <= 0) {
		throw std::logic_error("Height must be positive");
	}
	_height = height;
}


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

