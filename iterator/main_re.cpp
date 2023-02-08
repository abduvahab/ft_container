#include <iostream>
#include <vector>
#include "reverse_iterator.hpp"


int main(void)
{
	{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	ft::reverse_iterator<std::vector<int>::iterator> r_i(v.end());

	std::cout<<"r_i  5:"<<*r_i<<std::endl;
	std::cout<<"r_i  4:"<<*++r_i<<std::endl;
	std::cout<<"r_i  5:"<<*--r_i<<std::endl;
	std::cout<<"r_i  5:"<<*(r_i++)<<std::endl;
	std::cout<<"r_i  4:"<<*r_i<<std::endl;
	std::cout<<"r_i.base() 5:"<<*(r_i.base())<<std::endl;
	std::cout<<"r_i  4:"<<*(r_i--)<<std::endl;
	std::cout<<"r_i  5:"<<*r_i<<std::endl;
	std::cout<<"r_i[2] 3:"<<r_i[2]<<std::endl;
	std::cout<<"r_i.base() 0:"<<*(r_i.base())<<std::endl;
	std::cout<<"r_i+2 3:"<<*(r_i+2)<<std::endl;
	std::cout<<"r_i-1  4:"<<*(r_i-1)<<std::endl;
	r_i +=1;
	std::cout<<"r_i +=1 4:"<<*r_i<<std::endl;
	r_i -=1;
	std::cout<<"r_i -=1  5:"<<*r_i<<std::endl;

	ft::reverse_iterator<std::vector<int>::iterator> r_i_end(4 + r_i);
	std::cout<<"r_i_end   1:"<<*r_i_end<<std::endl;
	std::cout<<"r_i -_r_i_end   4:"<<r_i_end - r_i<<std::endl;

	std::cout<<"r_i.base   0:"<<*(r_i.base())<<std::endl;
	std::cout<<"r_i_end.base   2:"<<*(r_i_end.base())<<std::endl;
	std::cout<<std::boolalpha
		<<"0 < 2 :"<<(r_i < r_i_end)<<std::endl
		<<"2 > 0 :"<<(r_i_end > r_i)<<std::endl
		<<"1 == 1 :"<< ((r_i + 4) == r_i_end)<<std::endl
		<<"1 != 0 :"<<(r_i != r_i_end)<<std::endl;

	}
	{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	ft::reverse_iterator<std::vector<int>::iterator> r_i(v.end());


	ft::reverse_iterator<std::vector<int>::iterator> z(1 + r_i);
	ft::reverse_iterator<std::vector<int>::iterator> y(r_i);
	ft::reverse_iterator<std::vector<int>::iterator> x(r_i);
 std::cout
        << std::boolalpha
        << "*x == " << *x << '\n' // 3
        << "*y == " << *y << '\n' // 3
        << "*z == " << *z << '\n' // 2
        << "x == y ? " << (x == y) << '\n' // true
        << "x != y ? " << (x != y) << '\n' // false
        << "x <  y ? " << (x <  y) << '\n' // false
        << "x <= y ? " << (x <= y) << '\n' // true
        << "x == z ? " << (x == z) << '\n' // false
        << "x != z ? " << (x != z) << '\n' // true
        << "x <  z ? " << (x < z) << '\n' // true
        << "x <= z ? " << (x <= z) << '\n' // true
        ;
	}
	return 0;
}
