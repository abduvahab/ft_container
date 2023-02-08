/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:40:43 by areheman          #+#    #+#             */
/*   Updated: 2023/02/07 12:35:43 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TRAITS_HPP
#define ITERATOR_TRAITS_HPP

#include <cstddef>

namespace ft{

	struct input_iterator_tag{};
	struct output_iterator_tag{};
	struct forward_iterator_tag:public input_iterator_tag{};
	struct bidirectional_iterator_tag:public forward_iterator_tag{};
	struct random_access_iterator_tag:public bidirectional_iterator_tag{};
/*
	template <class Category, class T, class Distance=ptrdiff_t, class Pointer=T*, class Reference=T&>
	struct iterator{
		
		typedef	Category	iterator_category;
		typedef	T			value_type;
		typedef	Distance	difference_type;
		typedef	Pointer		pointer;
		typedef	Reference	reference;
	
	};
*/
	template <class Iter>
	struct iterator_traits{
		
		typedef	typename Iter::value_type			value_type;
		typedef	typename Iter::iterator_category	iterator_category;
		typedef	typename Iter::difference_type		difference_type;
		typedef	typename Iter::pointer				pointer;
		typedef	typename Iter::reference			reference;
	
	};

	template <class T>
	struct iterator_traits<T*>{
		
		typedef	 T							value_type;
		typedef	 random_access_iterator_tag	iterator_category;
		typedef	 ptrdiff_t					difference_type;
		typedef	 T*							pointer;
		typedef	 T&							reference;
	
	};

	template <class T>
	struct iterator_traits<const T*>{
		
		typedef	 T							value_type;
		typedef	 random_access_iterator_tag	iterator_category;
		typedef	 ptrdiff_t					difference_type;
		typedef	 const T*					pointer;
		typedef	 const T&					reference;
	
	};



}

#endif
