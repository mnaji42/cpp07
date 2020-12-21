/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 00:07:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 00:26:30 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void iter(T *tab, int size, void (&f)(T &))
{
	int i = 0;

	while (i < size)
		f(tab[i++]);
}

template <typename T>

void print(T &p)
{
    std::cout << p << std::endl;
}

template <typename T>
void inc(T &i)
{
    i++;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(tab, 10, print);
	std::cout << "--------------------------------------" << std::endl;
	iter(tab, 10, inc);
	iter(tab, 10, print);
	std::cout << "--------------------------------------" << std::endl;
	std::string tab2[] = {"Salut", "Bouboule", "Hello", "BlaBlaBla"};
	iter(tab2, 4, print);
	return 1;
}