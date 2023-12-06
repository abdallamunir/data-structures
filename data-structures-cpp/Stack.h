#pragma once

#include <iostream>
#include "Queue.h"
using namespace std;
template <class T>

class  clsMyStack :public   clsMyQueue <T>
{

public:

	void push(T Item)
	{
		clsMyQueue <T>::_MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return clsMyQueue <T>::front();

	}

	T Bottom()
	{
		return clsMyQueue <T>::back();

	}

};

template <class T>

class  clsMyStackArr :public   clsMyQueueArr <T>
{

public:

	void push(T Item)
	{
		clsMyQueueArr <T>::_MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return clsMyQueueArr <T>::front();

	}

	T Bottom()
	{
		return clsMyQueueArr <T>::back();

	}

};

