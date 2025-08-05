#include <iostream>
#include <cmath>

class Base_class {
	public:
	int base, height;
	int width, length;
	double radius;
	
	void findArea() {
		std::cout << "findArea() in Base class" << std::endl;
	}
	void perimeter() {
		std::cout << "perimeter() in Base class" << std::endl;
	}
};
class Triangle : public Base_class {
	public:
		void findArea() {
			std::cout << "Area of Triangle is " << (0.5 * base * height) << std::endl;
		}
		void perimeter() {
			double c= std::sqrt((base*base) + (height*height));
			std::cout << "Perimeter of triangle is " << (base + height + c) << std::endl;
		}
        
};
class Rectangle : public Base_class {
	public:
		void findArea() {
			std::cout << "Area of Rectangle is " << (width * length) << std::endl;
		}
		void perimeter() {
			std::cout << "Perimeter of Rectangle is " << (2 * (width + length)) << std::endl;
		}
};
class Circle : public Base_class {
	public:
		void findArea() {
			std::cout << "Area of Circle is " << (3.14 * radius * radius) << std::endl;
		}
		void perimeter() {
			std::cout << "Perimeter of Circle is " << (2.0 * 3.14 * radius) << std::endl;
		}
};

int main() {
	
}
