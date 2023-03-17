#ifndef _SHAPES_H_
#define _SHAPES_H_

#define PI 3.1415926

// Base class
class Shape {
public:
	Shape(double a = 0, double b = 0) {
		width = a; height = b;
	}
	~Shape() {}

	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	virtual double area() = 0;

protected:
	double width;
	double height;
};

class Triangle : public Shape {
public:
	Triangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * height / 2);
	}
};
class Circle : public Shape {
public:
	Circle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * width * 3.1415926);
	}
};
#endif
