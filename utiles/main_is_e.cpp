#include "is_integral.hpp"
#include <iostream>

int main(){

	std::cout<<std::boolalpha
			<<ft::is_integral<int>::value<<std::endl
			 <<ft::is_integral<char>::value<<std::endl
			 <<ft::is_integral<unsigned char>::value<<std::endl
			 <<ft::is_integral<signed char>::value<<std::endl
			 <<ft::is_integral<unsigned int>::value<<std::endl
			 <<ft::is_integral<double>::value<<std::endl
			 <<ft::is_integral<float>::value<<std::endl
			 <<ft::is_integral<long>::value<<std::endl;
		ft::is_integral<int>::type	f;
		std::cout<<"####"<<std::endl; 

		std::cout<<f.value <<std::endl; 


		return 0;
}
