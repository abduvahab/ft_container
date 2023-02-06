#include <iostream>
#include "pair.hpp"

int main(void)
{
	{
		ft::pair<std::string, int> p;
		p.first = "aa";
		p.second = 2;
		std::cout<<"ft::first:"<<p.first<<std::endl
			<<"ft::second: "<<p.second<<std::endl;
		ft::pair<std::string, int> f("bbb", 3);
		std::cout<<"ft::first_f:"<<f.first<<std::endl
			<<"ft::second_f: "<<f.second<<std::endl;
		ft::pair<std::string, int> f1(f);
		std::cout<<"ft::first_f1:"<<f1.first<<std::endl
			<<"ft::second_f1: "<<f1.second<<std::endl;
		
		ft::pair<int, int> f2;
		f2 = ft::make_pair(1,1);
		std::cout<<"ft::first_f2:"<<f2.first<<std::endl
			<<"ft::second_f2: "<<f2.second<<std::endl;
			
	}
	{
		
		ft::pair<std::string, int> f1("bbb", 3);
		ft::pair<std::string, int> f2("bbb", 3);
		if (f1 == f2)
			std::cout<<"equal"<<std::endl;
	
		ft::pair<std::string, int> s1("bbb", 4);
		ft::pair<std::string, int> s2("bbb", 3);
		if (s1 != s2)
			std::cout<<"no equal"<<std::endl;

		if (f1 < s1)
			std::cout<<"f1 smaller than s1"<<std::endl;
	
		if (f1 <= s2)
			std::cout<<"f1 <= s2"<<std::endl;
			
		if (s1 > s2)
			std::cout<<"s1 > s2 "<<std::endl;
		s2.second = 4;
		if (s1 >= s2)
			std::cout<<"s1 >= s2 "<<std::endl;







	}



	return 0;
}
