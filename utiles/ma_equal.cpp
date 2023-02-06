// equal algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::equal
#include <vector>       // std::vector
#include "utiles.hpp"       
#include "is_integral.hpp"       


bool mypredicate (int i, int j) {
  return (i==j);
}

/*
template<class T>
class BinaryPredicate{

	public:
		~BinaryPredicate(){}
		bool operator()(T t1, T t2)
		{
			if (t1 == t2)
				return	true;
			return faulse;
		}
};
*/

template<class T>
typename ft::enable_if<ft::is_integral<T>::value, T>::type re_int(T a)
{
	std::cout<<"re_int begin"<<std::endl;
	return a;
}

/*
template<class T,class =typename ft::enable_if<ft::is_integral<T>::value>::type> void re_int(T b)
{
	std::cout<<"re_int begin"<<std::endl;
	T a=b;
}
*/
int main () {
  int myints[] = {20,40,60,80,100};               //   myints: 20 40 60 80 100
 std::vector<int> myvector1(myints,myints+5);
  std::vector<int> myvector(myints,myints+5);     // myvector: 20 40 60 80 100

  // using default comparison:
  if ( ft::equal (myvector.begin(), myvector.end(),myvector1.begin()) )
    std::cout << "The contents of both sequences are equal.\n";
  else
    std::cout << "The contents of both sequences differ.\n";

  myvector[3]=81;                                 // myvector: 20 40 60 81 100

  // using predicate comparison:
  if ( ft::equal (myvector.begin(), myvector.end(),myvector1.begin(), mypredicate) )
    std::cout << "The contents of both sequences are equal.\n";
  else
    std::cout << "The contents of both sequences differ.\n";

  std::cout<<"new test begin "<<std::endl;

  	int a=5;
//	float a= 5;
//	re_int(a);
	std::cout<<"re___int: "<<re_int(a)<<std::endl;



  return 0;
}

