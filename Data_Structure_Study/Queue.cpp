#include "Queue.h"
#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
Queue<T>::Queue()
{
	list = new LinkedList<T>();
}

template <typename T>
void Queue<T>::enqueue(T data)
{
	list->pushBack(data);
}

template <typename T>
T Queue<T>::dequeue()
{
	return list->popFront();
}

template <typename T>
T Queue<T>::front()
{
	return list->get(0);
}

template <typename T>
T Queue<T>::back()
{
	return list->get(list->length() - 1);
}

template <typename T>
bool Queue<T>::is_empty()
{
	return list->isEmpty();
}

template <typename T>
int Queue<T>::get_length()
{
	return list->length();
}

template <typename T>
void Queue<T>::output()
{
	list->output();
}

template <typename T>
Queue<T>::~Queue()
{
	delete list;
}
