#include <iostream>
#include <stdlib.h>
using namespace std;
 
template <typename T>
class binarytree
{

public: 
	T key;
int insert(T key, binarytree *root)		
 {		
 	if (!root)		
 	{		
 		root = new binarytree;		
 		root->key_value = key;		
 		return root->key_value;		
 	}		
 	else if (root->key_value > key) insert(key, root);		
 	else if (root->key_value < key) insert(key, root); 		
 	else return root->key_value;		
 }		

int print(int check1, binarytree *root)		
 {		
 	if (!root) return check1; 		
 	if (root->key_value == 10 ) check1 = 12;		
 			
 	return check1;		
 }

int search(int check2, binarytree *root)		
 {		
 	if (!root) return check2;		
 		
 	if(root->key_value >= 0) 		
 		{ 		
 			root->key_value = 1;		
 		}		
 			
 	return root->key_value;		
 		
 }

int destroy_node(int check3, binarytree *root)		
 {		
 	if (!root) return check3;		
 			
 	cout << endl << endl << "Type the node you want to delete: "; 		
 		
 	if (root->key_value == check3) 		
 		{ 		
 			cout << endl << "[-] Error: You are trying to remove the root of the tree!" << endl;		
 			return 0;		
 		}		
 		
 			
 }		
 
int destroy_tree(int check4, binarytree *root)		
 {		
 	if (root != NULL)		
 	{		
 		delete root;		
		root = NULL;		
	}		
			
	return check4;		
}

};
