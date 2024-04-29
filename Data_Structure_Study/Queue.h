#pragma once
#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <bits/stdc++.h>
#include "LinkedList.h"

template <typename T>
class Queue
{
private:
	LinkedList<T>* list;
public:
	Queue();
	void enqueue(T data);
	T dequeue();
	T front();
	T back();
	void output();
	bool is_empty();
	int get_length();
	~Queue();
};

#endif
