#pragma once
#include <iostream>
using namespace std;
template  <class T>
class clsCalcLibrary
{
public:
	static T add(T _Number1,T  _Number2)
	{
		return _Number1 + _Number2;
	}

	static T subtract(T _Number1, T  _Number2)
	{
		return _Number1 - _Number2;
	}

	static T Multiply(T _Number1, T  _Number2)
	{
		return _Number1 * _Number2;
	}

	static T divide(T _Number1, T  _Number2)
	{
		if (_Number2 != 0)
			return _Number1 / _Number2;
		exit(1);
	}

	static T Power(T _Number1, T _Number2)
	{
		if (_Number2 == 0)
			return 1;
		if (_Number2 == 1)
			return _Number1;
		return _Number1 * Power(_Number1, _Number2 - 1);
	}

};

