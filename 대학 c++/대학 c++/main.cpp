
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:

	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;

	}
	int getRadius() {
		return radius;

	}
};

void swap(Circle *a, Circle *b) {
	Circle tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

	
}

int main() {
	Circle c1(5);
	Circle* p = &c1;

	Circle c2(10);
	Circle* q= &c2;
	cout << c1.getRadius() << "," << c2.getRadius() << '\n';

	swap(p, q);

	cout << c1.getRadius() << "," << c2.getRadius() << '\n';
}