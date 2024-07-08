#include <bits/stdc++.h>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Stack.h"
#include "Stack.cpp"
#include "Queue.h"
#include "Queue.cpp"
#include "BinaryTree.h"
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

	cout << "Queue <double>\n";
	Queue<double> queue;
	queue.enqueue(1.11);
	queue.enqueue(2.22);
	queue.enqueue(3.33);
	queue.enqueue(4.44);
	queue.output();
	queue.dequeue();
	queue.output();


	cout << "BinaryTree\n";
	BT::BinaryTree tree;
	tree.addNode(1);
	tree.addNode(2);
	tree.addNode(3);
	tree.addNode(4);
	tree.addNode(5);
	tree.addNode(6);
	tree.addNode(7);

	cout << "PreOrder: ";
	tree.preOrder();
	cout << endl << "InOrder: ";
	tree.inOrder();
	cout << endl << "PostOrder: ";
	tree.postOrder();
	cout << endl<<"LevelOrder: ";
	tree.levelOrder();
	cout << endl;

    return 0;
}
