// SList.h: file di inclusione per file di inclusione di sistema standard,
// o file di inclusione specifici del progetto.

#pragma once

#include <string>

// TODO: Fare riferimento qui alle intestazioni aggiuntive richieste dal programma.

template<class T>
class SList
{

private:
	struct ListElement
	{
		T value;
		ListElement* next = nullptr;

		ListElement() {};
		ListElement(T i_value)
		{
			value = i_value;
		}
		~ListElement()
		{
			next = nullptr;
		}
		
	};

public:
 class Iterator
    {
    public:
    Iterator() noexcept :
        m_pCurrentElement(firstElement) { }

    Iterator(const ListElement* pElement) noexcept :
        m_pCurrentElement(pElement) { }

    Iterator& operator=(ListElement* pElement)
    {
        this->m_pCurrentElement = pElement;
        return *this;
    }

    // Prefix ++ overload
    Iterator& operator++()
    {
        if (m_pCurrentElement)
            m_pCurrentElement = m_pCurrentElement->next;
        return *this;
    }

    // Postfix ++ overload
    Iterator operator++(int)
    {
        Iterator iterator = *this;
        ++* this;
        return iterator;
    }

    bool operator!=(const Iterator& iterator)
    {
        return m_pCurrentElement != iterator.m_pCurrentElement;
    }

    int operator*()
    {
        return m_pCurrentElement->value;
    }

private:
    const ListElement* m_pCurrentElement;
};

public:
	SList();
	~SList();
	SList<T>& operator=(SList&& other);
	bool empty() const noexcept;
	int size() const noexcept;
    Iterator begin() noexcept;
	

private:
	int counterElements = 0;
    ListElement* firstElement = nullptr;
};

#include <SListImpl.h>