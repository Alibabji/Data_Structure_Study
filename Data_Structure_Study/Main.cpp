#include <bits/stdc++.h>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {

    // we will create a doubly linked list of size 4

    // create a pointer to the head Node
	LinkedList<int> list;

	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	
	list.swap(0, 2);

	list.output();
    cout << endl;
    cout << endl;

	LinkedList<double> list2;
	list2.pushBack(1.234);
	cout <<endl<< list2.length() << endl << list2.isEmpty() << endl << list.length() << endl << list.isEmpty();

	cout << endl << endl << endl << endl << list.get(1);
    return 0;
}