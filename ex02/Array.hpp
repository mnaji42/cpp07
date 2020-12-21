/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 00:35:50 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 01:05:52 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_tab;
		unsigned int _size;

	public:
		//Constrcutor | Destructor
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array<T> &A);

		//Operator
		Array<T> &operator=(const Array<T> &A);
		T &operator[](unsigned int i);

		//Exception
		class segFault: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		//Fonctions
		unsigned int size() const;
};


//Constructor | Destructor

template <typename T>
Array<T>::Array(): _tab(NULL), _size(0)
{

}

template <typename T>
Array<T>::~Array()
{
	delete[] _tab;
}

template <typename T>
Array<T>::Array(unsigned int n): _tab(new T[n]()), _size(n)
{

}

template <typename T>
Array<T>::Array(const Array &A): _tab(NULL), _size(A._size)
{
	int i = -1;
	if (A._size)
	{
		_tab = new T[A._size];
		while (++i < A._size)
			_tab[i] = A._tab[i];
	}
}


//Operator
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &A)
{
	if (this != &A)
	{
		delete[] _tab;
		_tab = NULL;
		if (A._size)
		{
			_tab = new T[A._size];
			int i = -1;
			while (++i < A._size)
				_tab[i] = A._tab[i];
		}
		_size = A._size;
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (!_tab || i >= _size)
		throw segFault();
	return _tab[i];
}


//Fonctions

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

//Exception
template <typename T>
char const *Array<T>::segFault::what() const throw()
{
	return "Array : segFault";
}

#endif