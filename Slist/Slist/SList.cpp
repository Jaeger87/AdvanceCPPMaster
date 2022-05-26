#include "pch.h"
#include "SList.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

template<typename T>
SList<T>::SList()
{
}

template<typename T>
T SList<T>::getzero()
{
	return T();
}

template<typename T>
void SList<T>::Test()
{
	cout << "Test" << endl;
}


// No need to call this TemporaryFunction() function,
// it's just to avoid link error.
void TemporaryFunction()
{
	SList<int> TempObj;
}