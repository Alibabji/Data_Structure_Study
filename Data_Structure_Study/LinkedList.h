#pragma once
#ifndef __LINKEDLIST2_H__
#define __LINKEDLIST2_H__
#include <bits/stdc++.h>

template <typename T>
struct Node {
	T data;
	Node<T>* next;
	Node<T>* prev;
};

template <typename T>
class LinkedList
{
private:
	int size;
	Node<T>* head;
	Node<T>* end;
public:
	LinkedList();
	void pushFront(T data);
	void pushBack(T data);
	void insert(int pos, T data);
	T popFront();
	T popBack();
	void remove(int pos);
	void swap(int pos1, int pos2);
	T get(int pos);
	void output();
	bool isEmpty();
	int length();
	~LinkedList();
};
#endif
