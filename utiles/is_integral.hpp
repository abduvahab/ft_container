/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integral.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:51:46 by areheman          #+#    #+#             */
/*   Updated: 2023/02/06 09:47:25 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_INTEGRAL_HPP
#define IS_INTEGRAL_HPP
namespace ft{

	template<class T, T v>
	struct integral_constant{

		static const T				value = v;
		typedef		T				value_type;	
		typedef	integral_constant<T, v>	type;
		operator value_type() const {return value;}

	};

	typedef integral_constant<bool, false>	false_type;
	typedef integral_constant<bool, true>	true_type;

	template<class T>
	struct is_integral:false_type{};

	template<>
	struct is_integral<bool>:true_type{};

	template<>
	struct is_integral<char>:true_type{};
	
	template<>
	struct is_integral<signed char>:true_type{};
	
	template<>
	struct is_integral<unsigned char>:true_type{};
	
	template<>
	struct is_integral<short>:true_type{};
	
	template<>
	struct is_integral<unsigned short>:true_type{};
	
	template<>
	struct is_integral<int>:true_type{};

	template<>
	struct is_integral<unsigned int>:true_type{};
	
	template<>
	struct is_integral<long>:true_type{};
	
	template<>
	struct is_integral<unsigned long>:true_type{};
	
	template<>
	struct is_integral<long long>:true_type{};

	template<>
	struct is_integral<float>:false_type{};

	template<>
	struct is_integral<double>:false_type{};

	template<>
	struct is_integral<long double>:false_type{};

/*
 	template<class T>
	struct is_integral{
	
		static const bool value=false;
	} 	

 	template<>
	struct is_integral<bool>{
	
		static const bool value=true;
	} 	

 	template<>
	struct is_integral<int>{
	
		static const bool value=true;
	}

 	template<>
	struct is_integral<char>{
	
		static const bool value=true;
	} 		
*/

}

#endif


