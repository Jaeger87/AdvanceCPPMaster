#pragma once

#ifdef SList_EXPORTS
#define SListRosati __declspec(dllexport)
#else
#define SListRosati __declspec(dllimport)
#endif

template<typename T>

class SListRosati SList
{

public:
	SList();
	T getzero();
	void Test();
};

