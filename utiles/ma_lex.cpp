#include <iostream>
#include "utiles.hpp"

using namespace std;
bool	comp(char c1, char c2)
{
	return (c1 < c2);
}
int main(void)
{
	{
		cout<<"first test for without compare function"
			<<endl;
		char	v1[]="geeksforgeeks";
		char	v2[]="Gfg";
		if (ft::lexicographical_compare(v1, v1+13, v2, v2+3))
			cout<<"v1 less than v2"<<endl;
		else
			cout<<"v1 not less than v2"<<endl;

	
	}

	{
		cout<<"second test for without compare function"
			<<endl;
		char	v1[]="geeksforgeeks";
		char	v2[]="gfg";
		if (ft::lexicographical_compare(v1, v1+13, v2, v2+3, comp))
			cout<<"v1 less than v2"<<endl;
		else
			cout<<"v1 not less than v2"<<endl;

	
	}




	return 0;
}
