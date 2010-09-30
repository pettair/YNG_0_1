/*
 *  Exceptions.hpp
 *  YNG_0_1
 *
 *  Created by Peter Bíró on 9/30/10.
 *  Copyright 2010 PetAir corp.. All rights reserved.
 *
 */
#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

using namespace std;

class UnderFlowException : public exception
{
public:
	const char* what() const throw() { return "Alulcsordulas!"; }
};

class OverFlowException : public exception
{
public:
	const char* what() const throw() { return "Tulcsordulas!"; }
};

class ActNullException : public exception
{
public:
	const char* what() const throw() { return "Nincs aktualis elem kivalasztva"; }
};

class myExceptionBC : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "\nNem megfelelo parancs! Probalja ujra!\n";
	}
}myExBC;

class myExceptionEXIT : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Kilepes";
	}
}myExEXIT;

#endif
