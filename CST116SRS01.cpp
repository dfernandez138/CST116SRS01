// CST116SRS01_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<cassert>
#include <iostream>

int main()
{
	std::size_t boo = sizeof(bool);
	std::size_t sichar = sizeof(signed char);
	std::size_t unsichar = sizeof(unsigned char);
	std::size_t cha = sizeof(char);
	std::size_t unsisho = sizeof(unsigned short);
	std::size_t shosho = sizeof(short);
	std::size_t sig = sizeof(signed);
	std::size_t unsig = sizeof(unsigned);
	std::size_t tni = sizeof(int);
	std::size_t stud = sizeof(std::size_t);
	std::size_t ceelo = sizeof(signed long);
	std::size_t unceelo = sizeof(unsigned long);
	std::size_t dong = sizeof(long);
	std::size_t pwise = sizeof(float);
	std::size_t dubo = sizeof(double);
	std::size_t lodubo = sizeof(long double);

	assert(sizeof(char) == 1);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(bool) == 1);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(double long) == 8);
    return 0;
}

