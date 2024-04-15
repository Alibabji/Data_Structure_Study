#pragma once
#ifndef __STACK_H__
#define __STACK_H__
#include <bits/stdc++.h>
#include "LinkedList.h"

template <typename T>
class Stack
{
private:
	LinkedList<T> *list;
public:
	Stack();
	void push(T data);
	T pop();
	T top();
	bool is_empty();
	int get_length();
	void output();
	~Stack();
};

#endif
