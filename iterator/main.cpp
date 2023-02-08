#include <iostream>
#include <vector>
#include "iterator_traits.hpp"

template <class Bidir>
void my_reverse(Bidir first, Bidir last)
{
		typename ft::iterator_traits<Bidir>::difference_type n = std::distance(first, last);
	
//	--last;
	for (--n; n> 0; n -=2)
	{
		typename ft::iterator_traits<Bidir>::value_type tem;
		tem = *first;
		*first++ = *--last;
		*last = tem;
	}


};

void my_print(int i)
{

	std::cout<<i<<" ";
}


int main()
{	
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	for_each(v.begin(), v.end(), my_print);
	std::cout<<std::endl;
	my_reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(),my_print);
	std::cout<<std::endl;

	return 0;
}
