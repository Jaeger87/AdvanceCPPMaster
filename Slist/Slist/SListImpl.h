#pragma once
#include "SList.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

template<class T>
inline SList<T>::SList()
{
}

template<class T>
inline SList<T>::~SList()
{
}

template<class T>
inline SList<T>& SList<T>::operator=(SList&& other)
{
	return *this;
}

template<class T>
inline bool SList<T>::empty() const noexcept
{
	return size() == 0;
}


template<class T>
inline int SList<T>::size() const noexcept
{
	return 0;
}


template<class T>
inline T SList<T>::getzero()
{
	return T();
}

template<class T>
inline void SList<T>::Test()
{
	cout << "Test" << endl;
}

template<class T>
inline int SList<T>::count()
{
	return 0;
}