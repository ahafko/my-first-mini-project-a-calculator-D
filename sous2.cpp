#include <iostream>
#include <iomanip>

double add(double a, double b) {
	return a + b;
}
double subtract(double a, double b) {
	return a - b;
}
double multiply(double a, double b) {
	return a * b;
}
double divide(double a, double b) {
	if ( std::abs(b) < 0.000001 ) {
		std::cout << " error: >;'0 " << std::endl;
		return 0;
	}
	return a / b;
}
int main() {
	double a, b;

        std::cout << " enter numder 1 " << std::endl;
	std::cin >> a;
	
	std::cout << " enter number 2 " << std::endl;
	std::cin >> b;

	if ( a > 10000 || b > 10000) {
		std::cout << " error: >=-0 " << std::endl;
		return 1;
	}

	double result = add(a, b);
	std::cout << result << std::endl;

	double result2 = subtract(a, b);
	std::cout << result2 << std::endl;

	double result3 = multiply(a, b);
	std::cout << result3 << std::endl;

	double result4 = divide(a, b);
	std::cout << result4 << std::endl;

	return 0;
}
