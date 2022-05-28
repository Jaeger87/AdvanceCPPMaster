// SList.h: file di inclusione per file di inclusione di sistema standard,
// o file di inclusione specifici del progetto.

#pragma once

#include <string>

// TODO: Fare riferimento qui alle intestazioni aggiuntive richieste dal programma.


template<class T>
class SList
{

public:

	using size_type = std::size_t;

	SList();
	~SList();
	bool empty() const noexcept;
	size_type size() const noexcept;
	T getzero();
	void Test();
	int count();
	
};

#include <SListImpl.h>