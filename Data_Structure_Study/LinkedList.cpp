#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
LinkedList<T>::LinkedList()
{
	size = 0;
	head = NULL;
	end = NULL;
}
template <typename T>
void LinkedList<T>::pushFront(T data)
{
	Node<T>* new_Node = new Node<T>;
	new_Node->data = data;
	new_Node->prev = NULL;
	new_Node->next = head;
	if (end == NULL)(end) = new_Node;
	if (head != NULL)(head)->prev = new_Node;
	(head) = new_Node;
	size++;
	return;
}
template <typename T>
void LinkedList<T>::pushBack(T data) {
	Node<T>* new_Node = new Node<T>;
	new_Node->data = data;
	new_Node->next = NULL;
	new_Node->prev = end;
	if (head == NULL)head = new_Node;
	if (end != NULL)end->next = new_Node;
	end = new_Node;
	size++;
	return;
}
template <typename T>
void LinkedList<T>::insert(int pos, T data)
{
	try {
		if (pos > size || pos < 0)
			throw 0;
	}
	catch (int num_exception) {
		cout << "Position Out of Boundary!!!\n";
		return;
	}
	Node<T>* iter = head;
	for (int i = 1; i < pos; i++)
		iter = iter->next;

	if (iter->next == NULL)
	{
		pushBack(data);
		return;
	}
	else if (iter->prev == NULL)
	{
		pushFront(data);
		return;
	}

	Node<T>* new_Node = new Node<T>;
	new_Node->data = data;
	new_Node->next = iter->next;
	new_Node->prev = iter;
	iter->next->prev = new_Node;
	iter->next = new_Node;
	size++;
	return;
}
template <typename T>
T LinkedList<T>::popFront()
{
	try {
		if (size <= 0)
			throw 0;
	}
	catch (int num_exception) {
		cout << "Position Out of Boundary!!!\n";
		return NULL;
	}
	if (end == head)
	{
		delete head;
		head = NULL, end = NULL;
		size--;
		return NULL;
	}

	T temp = head->data;
	head = head->next;
	delete head->prev;
	head->prev = NULL;
	size--;

	return temp;
}
template <typename T>
T LinkedList<T>::popBack()
{
	try {
		if (size <= 0)
			throw 0;
	}
	catch (int num_exception) {
		cout << "Position Out of Boundary!!!\n";
		return NULL;
	}
	if (end == head)
	{
		delete end;
		head = NULL, end = NULL;
		size--;
		return NULL;
	}

	T temp = end->data;
	end = end->prev;
	delete end->next;
	end->next = NULL;
	size--;

	return temp;
}
template <typename T>
T LinkedList<T>::get(int pos)
{
	Node<T>* iter = head;
	for (int i = 0; i < pos; i++)
		iter = iter->next;
	return iter->data;
}

template <typename T>
void LinkedList<T>::remove(int pos)
{
	try {
		if (pos >= size || pos < 0)
			throw 0;
	}
	catch (int num_exception) {
		cout << "Position Out of Boundary!!!\n";
		return;
	}
	Node<T>* iter = head;
	for (int i = 0; i < pos; i++)
		iter = iter->next;
	if (iter->next == NULL)
	{
		popBack();
		return;
	}
	else if (iter->prev == NULL)
	{
		popFront();
		return;
	}

	iter->next->prev = iter->prev;
	iter->prev->next = iter->next;
	delete iter;
	size--;
	return;
}
template <typename T>
void LinkedList<T>::swap(int pos1, int pos2)
{
	Node<T>* iter1 = head;
	for (int i = 0; i < pos1; i++)
		iter1 = iter1->next;
	Node<T>* iter2 = head;
	for (int i = 0; i < pos2; i++)
		iter2 = iter2->next;
	int temp = iter2->data;
	iter2->data = iter1->data;
	iter1->data = temp;
	return;
};
template <typename T>
void LinkedList<T>::output()
{
	for (Node<T>* iter = head; iter != NULL; iter = iter->next)
	{
		cout << iter->data << '\n';
	}
	cout << '\n';
}
template <typename T>
int LinkedList<T>::length()
{
	return size;
}
template <typename T>
bool LinkedList<T>::isEmpty()
{
	return (size ? false : true);
}
template <typename T>
LinkedList<T>::~LinkedList()
{
	while(size > 0)
		remove(0);
}
