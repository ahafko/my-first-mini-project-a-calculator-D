#include <iostream>
#include <iomanip>
int main()
{
	double x;
        double y;


	std::cout << " enter two numbers,please =) " << std::endl;
	//there are only numbers here -_-
	if (!(std::cin >> x >> y)) {
		std::cout << "error: invalid input =( " << std::endl;
		return 1;
	}

	//here is the maximum numder fixed =_)
        if ( x > 10000 || y > 10000) {
		std::cout << " limit exceeded...my system in crying...(T_T) " << std::endl;
		return 1;
	}

        //there's a zero check here =D	
	if (std::abs(y) < 0.000001 ) {
		std::cout << " error: division by zero =( " << std::endl;
		return 1;
	}

     
	std::cout << " result: " << std::endl;
	// here the counting begins =)
	double diff = x - y; 
	double prod = x * y;
	double qout = x / y;
        double result = x + y;
	std::cout << "sum: " << result << std::endl;
	std::cout << "diff: " << diff << std::endl;
	std::cout << "prod: " << prod << std::endl;
	std::cout << "qout: " << qout << std::endl;
 
	return 0; }


