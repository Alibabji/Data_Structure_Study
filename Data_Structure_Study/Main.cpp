#include <bits/stdc++.h>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main() {

	cout << "LinkedList <int>\n";
	LinkedList<int> list;
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	list.output();
	list.popBack();
	list.output();

	cout << "LinkedList <double>\n";
	LinkedList<double> listD;
	listD.pushBack(1.1);
	listD.pushBack(2.2);
	listD.pushBack(3.3);
	listD.pushBack(4.4);
	listD.output();
	listD.popBack();
	listD.output();


	cout << "Stack <double>\n";
	Stack<double> stack;
	stack.push(1.11);
	stack.push(2.22);
	stack.push(3.33);
	stack.push(4.44);
	stack.output();
	stack.pop();
	stack.output();

    return 0;
}
