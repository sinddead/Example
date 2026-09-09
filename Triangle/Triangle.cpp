#include "Triangle.h"
#include <stdexcept>

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
