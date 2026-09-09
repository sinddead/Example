#pragma once
class Triangle {
private:
	double _side;
	double _height;

public:
	Triangle(double side = 1, double height = 1);
	double calculateArea() const;
	double getSide() const;
	double getHeight() const;
	void setSide(double side);
	void setHeight(double height);
};