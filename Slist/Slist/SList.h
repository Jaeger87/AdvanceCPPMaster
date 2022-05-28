// SList.h: file di inclusione per file di inclusione di sistema standard,
// o file di inclusione specifici del progetto.

#pragma once

#include <string>

// TODO: Fare riferimento qui alle intestazioni aggiuntive richieste dal programma.

template<class T>
class SList
{

public:


	SList();
	~SList();
	SList<T>& operator=(SList&& other);
	bool empty() const noexcept;
	int size() const noexcept;
	T getzero();
	void Test();
	int count();
	
};

#include <SListImpl.h>