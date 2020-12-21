/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 01:00:30 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 01:15:34 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> I(7);
	Array<std::string> S(3);
	Array<int> I2(I);
	
	try
	{
		std::cout << "size = " << I.size() << std::endl;
		I[0] = 12;
		I[1] = 14;
		I[2] = 17;
		I[3] = 19;
		I[4] = 1;
		I[5] = -12;
		I[6] = 37;
		int i = 0;
		while (1)
		{
			std::cout << "i = " << I[i] << std::endl;
			i++;
		}
		std::cout << "coucou" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		std::cout << "size = " << I.size() << std::endl;
		I2[0] = 12;
		I2[1] = 14;
		I2[2] = 17;
		I2[3] = 19;
		I2[4] = 1;
		I2[5] = -12;
		I2[6] = 37;
		int i = 0;
		while (1)
		{
			std::cout << "i = " << I2[i] << std::endl;
			i++;
		}
		std::cout << "coucou" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		std::cout << "size = " << I.size() << std::endl;
		S[0] = "Salut";
		S[1] = "Bonjour";
		S[2] = "BLOUBLOUBLOU";
		int i = 0;
		while (1)
		{
			std::cout << "i = " << S[i] << std::endl;
			i++;
		}
		std::cout << "coucou" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		std::cout << "COUCOU 1" <<std::endl;
		I[4] = 0;
		std::cout << "COUCOU 2" <<std::endl;
		std::cout << I[4] << std::endl;
		std::cout << "COUCOU 3" <<std::endl;
		S[1] = "test";
		std::cout << "COUCOU 4" <<std::endl;
		std::cout << S[1] << std::endl;
		std::cout << "COUCOU 5" <<std::endl;
		I[12] = 47;
		std::cout << "COUCOU 6" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "FIN DU PRGRAMME" << std::endl;
	return 0;
}