/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:26:29 by areheman          #+#    #+#             */
/*   Updated: 2023/02/06 14:18:07 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_H
#define PAIR_H

#include "utiles.hpp"

namespace ft{

	template<class T1, class T2>
	struct pair{
		
		typedef T1	first_type;
		typedef T2	second_type;

		first_type	first;
		second_type	second;

		pair(){}
		pair(const first_type& x, const second_type& y)
		{
			first = x;
			second = y;
		}

		pair(const pair& obj):first(obj.first), second(obj.second){}

	template<class U1,class U2>	
		pair(const pair<U1, U2>& obj):first(obj.first), second(obj.second){}
		pair& operator=(const pair& obj)
		{
			if (this == &obj)
				return *this;
			first = obj.first;
			second = obj.second;
			return *this;
		}
	};
	
	template<class T1, class T2>
	pair<T1, T2> make_pair(T1 t, T2 u)
	{
		return pair<T1, T2>(t, u);
	}

	template<class T1, class T2>
	bool operator==(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (lhs.first == rhs.first && lhs.second == rhs.second);
	}

	template<class T1, class T2>
	bool operator!=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (!(lhs == rhs));
	}

	template<class T1, class T2>
	bool operator<(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{	if (lhs.first < rhs.first)
			return true;
		if (rhs.first < lhs.first)
			return false;
		if (lhs.second < rhs.second)
			return true;
		return false;
	}

	template<class T1, class T2>
	bool operator<=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (!(lhs > rhs));
	}

	template<class T1, class T2>
	bool operator>(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return ((lhs !=  rhs) && (lhs >= rhs));
	}

	template<class T1, class T2>
	bool operator>=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
	{
		return (!(lhs < rhs));
	}

}


#endif

