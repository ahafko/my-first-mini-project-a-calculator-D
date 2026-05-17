#include <iostream>


void printGrades(int myGrades[], int size) {   // making functions indepedent =o
					       //
	double sum = 0;   //we do this to make the arithmetic mean further =_)
	std::cout << "your grades >;)" << std::endl;
	for(int i = 0; i < size; i++) {
		std::cout << " grades" << i + 1 << ": " << myGrades[i] << std::endl; 

	sum = sum + myGrades[i]; 
	}
	double average = sum / size; //here we find the avrage  
		std::cout << " averade score: " << average << std::endl;
	
}
int main() {

	int grades[5] = { 5,4,3,5,2}; //an array so that everything is together
        printGrades(grades, 5 ); //so that it print  
	return 0;
}
