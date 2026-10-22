/*Bryan Bravo
Panther ID:6059483
Date:4/2/2022
Assignment 5 BST-In Order Traveral
Description:Task was to make a binary search tree in which we needed to ask the user for input.
Upon asking the user for the input we would then need to find the in order traversal and display it back.
*/
#include <stdio.h>
#include <stdlib.h>

//Below is a structure for the node contains a key with pointers left and right.
struct node {
	int key;
	struct node* left;
	struct node* right;
};

void insert_node(struct node ** tree, int num);
void In_order(struct node * s);

//below is the main function which will ask the user to enter a number
//and will display the in order traveral
void main() {
    char ch = 'N';
    struct node *root;
    int new_node_info;
    
    root = NULL;
    printf("====OUTPUT====\n");
    do {
        printf("Please Enter a number for the binary tree: ");
            scanf(" %d",&new_node_info);
            insert_node(&root,new_node_info);
            
            printf("\nDo you wish to insert another number into the BST ? (Y/N): ");
                scanf(" %c",&ch);
    }
    
    while (ch == 'Y');
        printf("The Inorder Traversal is: ");
        In_order(root);
        return;
}

//Algorithm to insert a node into the Binary search tree
void insert_node(struct node **tree, int num) {
    
    struct node *z = NULL;
        if(!(*tree)) {
            z = malloc(sizeof(struct node));
            z->left = NULL;
            z->right = NULL;
            z->key = num;
            *tree=z;
            return;
        }
        if(num <(*tree)-> key) {
            insert_node(&(*tree)->left,num);
        }
        else if(num > (*tree)-> key) {
            insert_node(&(*tree)->right,num);

        }
        }
// algorithm used for the In_order Traversal
void In_order(struct node * c) {
    if(c) {
        In_order(c->left);
            printf("%d,",c->key);
        In_order(c->right);
    }
}