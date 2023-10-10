
#include <iostream>


int main()
{
	double a;
	double b;
	double c;

	std::cin >> a >> b >> c;

	double D = std::sqrt(b*b - 4 * a*c);
	if (a == 0) { std::cout << "x=" << -c / b << std::endl; }
	else {
		if (D>0) {
			std::cout << "x1=" << (-b + D) / (2 * a) << "       x2=" << (-b - D) / (2 * a) << std::endl;
		}
		else {
			if (D == 0) { std::cout << "x=" << (-b + D) / (2 * a) << std::endl; }
			else { std::cout << "none" << std::endl; }
		}
	}

	return 0;
}
