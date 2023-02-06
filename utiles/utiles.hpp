/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:25:28 by areheman          #+#    #+#             */
/*   Updated: 2023/02/06 10:59:13 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILES_HPP
#define UTILES_HPP
namespace ft{

template <class InputIterator1, class InputIterator2>
bool	equal(InputIterator1 first1, InputIterator1 last1, InputIterator2 first2)
{
	while(first1 != last1)
	{
		if (*first1 != *first2)
			return false;
		++first1;
		++first2;
	}
	return true;
}

template <class InputIterator1, class InputIterator2, class BinaryPredicate>
bool	equal(InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, BinaryPredicate pred)
{
	while(first1 != last1)
	{
		if (!(pred(*first1, *first2)))
			return false;
		++first1;
		++first2;
	}
	return true;
}

template <class InputIt1, class InputIt2>
bool	lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
{
	while (first1 != last1)
	{
		if ((first2 == last2) || (*first2 < *first1))
			return false;
		else if ( *first1 < *first2)
			return true;
		++first1;
		++first2;
	}
	return (first2 != last2);
}

template <class InputIt1, class InputIt2, class Compare>
bool	lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, Compare comp)
{
	while (first1 != last1)
	{
		if ((first2 == last2) || comp(*first2, *first1))
			return false;
		else if ( comp(*first1, *first2))
			return true;
		++first1;
		++first2;
	}
	return (first2 != last2);
}

template <bool B, class T=void>
struct enable_if{};

template<class T>
struct enable_if<true, T>
{
	typedef T type;
};


}

#endif

/*
https://www.cs.helsinki.fi/group/boi2016/doc/cppreference/reference/en.cppreference.com/w/cpp/algorithm/equal.html
pred
		Binary function that accepts two elements as argument 
		This can either be a function pointer or a function object.





		*/
