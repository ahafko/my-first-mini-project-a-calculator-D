#include <iostream>

int multiply( int number, int i ) {
	return number * i;
}
int main() {
int number;
std::cout << " enter number, please <=0 " << std::endl; 
std::cin >> number;
std::cout << " result: " << std::endl;
for ( int i = 1; i <= 10; i++) { // i made a cycle to create a multiplication table column :0
		int result = multiply( number, i); // and here is the multiplication :^o
		std::cout << number << "x" << i << "=" << result << std::endl; // and here there should be a conclusion ;'D
		}
return 0; }
