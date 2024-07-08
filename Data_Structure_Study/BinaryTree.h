#pragma once
#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__
#include <bits/stdc++.h>
using namespace std;
namespace BT{
	struct Node {
		int data;
		Node* left=NULL;
		Node* right=NULL;
		Node* parent;
	};
	class BinaryTree {
	private:
		Node* root;
	public:
		BinaryTree();
		void addNode(int n);
		void deleteNode(int n);

		void printPreOrder(Node* node);
		void preOrder();

		void printInOrder(Node* node);
		void inOrder();

		void printPostOrder(Node* node);
		void postOrder();

		void levelOrder();
	};
}
#endif
