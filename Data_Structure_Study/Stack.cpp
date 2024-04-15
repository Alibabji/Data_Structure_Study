#include "Stack.h"
#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
Stack<T>::Stack()
{
	list = new LinkedList<T>();
}

template <typename T>
void Stack<T>::push(T data)
{
	list->pushBack(data);
}

template <typename T>
T Stack<T>::pop()
{
	return list->popBack();
}

template <typename T>
T Stack<T>::top()
{
	return list->get(list->length() - 1);
}

template <typename T>
bool Stack<T>::is_empty()
{
	return list->isEmpty();
}

template <typename T>
void Stack<T>::output()
{
	list->output();
}

template <typename T>
int Stack<T>::get_length()
{
	return list->length();
}
template <typename T>
Stack<T>::~Stack()
{
	delete list;
}
