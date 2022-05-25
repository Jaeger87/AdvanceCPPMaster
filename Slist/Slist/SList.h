#pragma once

#ifdef SList_EXPORTS
#define SListRosati __declspec(dllexport)
#else
#define SListRosati __declspec(dllimport)
#endif

class SListRosati SList
{

public:
	SList();
	void Test();
};

