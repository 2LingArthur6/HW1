#include <iostream>
using namespace std;

class Shape {
public:
   virtual float area() = 0;
};

class Triangle: public Shape {
private:
   float base;
   float height;

public:
   Triangle(float b, float h) {
      base = b;
      height = h;
   }

   float area() {
      return 0.5*base*height;
   }
};

class Circle: public Shape {
private:
   float radius;

public:
   Circle(float r) {
      radius = r;
   }

   float area() {
      return 3.14159*radius*radius;
   }
};

int main() {
   Shape *s;
   float length, width, base, height, radius;


   

   // Get dimensions for triangle
   cout << "Enter base and height of triangle: ";
   cin >> base >> height;
   Triangle t(base, height);

   // Get dimensions for circle
   cout << "Enter radius of circle: ";
   cin >> radius;
   Circle c(radius);

   // Calculate and output areas


   s = &t;
   cout << "Area of Triangle is: " << s->area() << endl;

   s = &c;
   cout << "Area of Circle is: " << s->area() << endl;

   return 0;
}

