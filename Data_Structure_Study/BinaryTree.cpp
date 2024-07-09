#include "BinaryTree.h"
#include <bits/stdc++.h>
using namespace std;

BT::BinaryTree::BinaryTree() 
{
	root = NULL;
}



void BT::BinaryTree::addNode(int n)
{
	queue <BT::Node*> Q;
	BT::Node* newNode = new BT::Node;
	newNode->data = n;
	if (root == NULL) {
		root = newNode;
	}
	else {
		Q.push(root);
		while (!Q.empty()) {
			BT::Node* current = Q.front();
			Q.pop();
			if (current->left==NULL){
				current->left = newNode;
				break;
			}
			else {
				Q.push(current->left);
			}
			if (current->right== NULL) {
				current->right = newNode;
				break;
			}
			else {
				Q.push(current->right);
			}
		}
	}
}

void BT::BinaryTree::deleteNode(int n) {
	stack<int> S;
	if (n == 0) {
		delete root;
		return;
	}
	while (n>1) {
		if (n % 2 == 0)S.push(1);
		else if (n % 2 == 1)S.push(-1);
		n /= 2;
	}
	BT::Node* current = root;
	while (S.size() == 0) {
		int lr = S.top();
		S.pop();
		if (lr == 1)current = current->right;
		else current = current->left;
	}
	if (current->left != NULL || current->right != NULL) {
		cout << "자식노드가 존재합니다!!";
		return;
	}
	delete current;
	return;
}

void BT::BinaryTree::printPreOrder(BT::Node* node) {
	if (node == NULL)return;
	cout << node->data<<' ';
	if(node->left!=NULL)printPreOrder(node->left);
	if(node->right!=NULL)printPreOrder(node->right);
}

void BT::BinaryTree::preOrder(){
	if (root == NULL)return;
	printPreOrder(root);
}

void BT::BinaryTree::printInOrder(Node* node) {
	if (node == NULL)return;
	if (node->left != NULL)printInOrder(node->left);
	cout << node->data << ' ';
	if (node->right != NULL)printInOrder(node->right);
};

void BT::BinaryTree::inOrder() {
	if (root == NULL)return;
	printInOrder(root);
};

void BT::BinaryTree::printPostOrder(Node* node) {
	if (node == NULL)return;
	if (node->left != NULL)printPostOrder(node->left);
	if (node->right != NULL)printPostOrder(node->right);
	cout << node->data << ' ';
};

void BT::BinaryTree::postOrder() {
	if (root == NULL)return;
	printPostOrder(root);
};
void BT::BinaryTree::levelOrder() {
	if (root == NULL)return;
	queue <BT::Node*> Q;
	Q.push(root);
	while (!Q.empty()) {
		BT::Node* current = Q.front();
		cout << Q.front()->data << ' ';
		Q.pop();
		if (current->left != NULL) Q.push(current->left);
		if (current->right != NULL) Q.push(current->right);
	}
}
