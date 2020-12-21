/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 00:07:59 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 00:08:00 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>

T max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

template<typename T>

T min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>

void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	std::cout << min(12, -2) << std::endl;
	std::cout << min(1200000000, -2) << std::endl;
	std::cout << min(12.4, 1.0) << std::endl;
	std::cout << min(-0.2, -0.0) << std::endl;
	std::cout << min(45.2, 67.1) << std::endl;
	std::cout << max(0.0, 0.0) << std::endl;
	std::cout << max(0, 0) << std::endl;
	std::cout << max(-11111765, -23452765) << std::endl;
	std::cout << max(12, -2) << std::endl;
	std::cout << max(42.2, -12.2) << std::endl;
	std::cout << max(89, 0) << std::endl;
	std::cout << max(12, 12) << std::endl;
	try
	{
		int a = 1;
		int b = 0;
		swap(a,b);
		std::cout << "a = " << a << "\nb = " << b  << std::endl;
	}
	catch (int) { }
	try
	{
		float a = -12.3;
		float b = 0.0;
		swap(a,b);
		std::cout << "a = " << a << "\nb = " << b  << std::endl;
	}
	catch (int) { }
	try
	{
		double a = 0.00000000001;
		double b = 1.000000040;
		swap(a,b);
		std::cout << "a = " << a << "\nb = " << b  << std::endl;
	}
	catch (int) { }
	try
	{
		unsigned int a = 1;
		unsigned int b = 45;
		swap(a,b);
		std::cout << "a = " << a << "\nb = " << b  << std::endl;
	}
	catch (int) { }
	try
	{
		unsigned long long a = 643546383762525;
		unsigned long long b = 74644373928727628;
		swap(a,b);
		std::cout << "a = " << a << "\nb = " << b  << std::endl;
	}
	catch (int) { }
	return 0;
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }