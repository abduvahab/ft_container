/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:35:16 by areheman          #+#    #+#             */
/*   Updated: 2023/02/08 16:06:04 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP
#include "iterator_traits.hpp"

namespace ft{

 	template <class Iter>
	class reverse_iterator{
  
		protected:
			Iter	current;

		public:
			typedef 		 Iter											iterator_type;
			typedef typename ft::iterator_traits<Iter>::iterator_category	iterator_category;
			typedef typename ft::iterator_traits<Iter>::value_type			value_type	;
			typedef typename ft::iterator_traits<Iter>::pointer				pointer;
			typedef typename ft::iterator_traits<Iter>::reference			reference;	
			typedef typename ft::iterator_traits<Iter>::difference_type		difference_type	;

		public:
  			reverse_iterator(){current = Iter();}
  			explicit reverse_iterator(iterator_type x):current(x){}
			template<class U>
  			reverse_iterator(const reverse_iterator<U>& other):current(other.current){};
			template<class U>
  			reverse_iterator& operator=(const reverse_iterator<U>& other)
			{
				if (this == &other)
					return *this;
				current = other.currrent;
				return *this;
			}

			iterator_type	base() const{return current;}

			reference	operator*()const{
				iterator_type tmp = current;
				return *(--tmp);
			}

			pointer	operator->()const{
				iterator_type tmp = current;
				return &(*--tmp);
			}

			reference operator[](difference_type n){
				iterator_type tmp = current;
				for(; n > 0; n-- )
					--tmp;
				return *--tmp;
			}

			reverse_iterator& operator++(){
				--current;
				return *this;
			}

			reverse_iterator operator++(int){
				reverse_iterator tmp = *this;
				++(*this);
				return tmp;
			}

			reverse_iterator& operator--(){
				++current;
				return *this;
			}

			reverse_iterator operator--(int){
				reverse_iterator tmp = *this;
				++(this->current);
				return tmp;
			}
 
			reverse_iterator operator+(difference_type n)const{
				reverse_iterator tmp(base()-n); 
				return tmp;
			}

			reverse_iterator operator+=(difference_type n){
				for(; n > 0; --n)
					--current;
				return *this;
			}

			reverse_iterator operator-(difference_type n)const{
				reverse_iterator tmp(base() - n);
				return tmp;
			}

			reverse_iterator& operator-=(difference_type n){
				for(; n>0; --n)
					++current;
				return *this;
			} 
  	};
	
	template <class Iter1, class Iter2>
	bool	operator==(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() == rhs.base();
	}

	template <class Iter1, class Iter2>
	bool	operator!=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() != rhs.base();
	}

	template <class Iter1, class Iter2>
	bool	operator>(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() < rhs.base();
	}

	template <class Iter1, class Iter2>
	bool	operator>=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() <= rhs.base();
	}

	template <class Iter1, class Iter2>
	bool	operator<(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() > rhs.base();
	}

	template <class Iter1, class Iter2>
	bool	operator<=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return lhs.base() >= rhs.base();
	}

	template <class Iter>
	ft::reverse_iterator<Iter>	operator+(typename ft::reverse_iterator<Iter>::difference_type n, const ft::reverse_iterator<Iter>& it){
		
		return reverse_iterator<Iter>(it.base() - n);
	}

	template <class Iter1, class Iter2>
	typename ft::reverse_iterator<Iter1>::difference_type 	operator-(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs){
		
		return rhs.base() - lhs.base();
	}

}


#endif
