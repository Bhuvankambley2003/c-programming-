#include<stdio.h>
#include<stdlib.h>
#define COUNT 10

// node of a BST
struct Node {
    int data;
    struct Node *left, *right;
};

// function to get a new node
struct Node* getNode(int data)
{
    // Allocate memory
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // put in the data
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// function to construct a BST from
// its level order traversal
struct Node* LevelOrder(struct Node* root, int data)
{
    if (root == NULL) {
        root = getNode(data);
        return root;
    }
    if (data <= root->data)
        root->left = LevelOrder(root->left, data);
    else
        root->right = LevelOrder(root->right, data);
    return root;
}

struct Node* constructBst(int arr[], int n)
{
    if (n == 0)
        return NULL;
    struct Node* root = NULL;

    for (int i = 0; i < n; i++)
        root = LevelOrder(root, arr[i]);

    return root;
}

// function to print the inorder traversal
void inorderTraversal(struct Node* root)
{
    if (!root)
        return;

    inorderTraversal(root->left);
    printf("%d ",root->data);
    inorderTraversal(root->right);
}

// Function to print binary tree in 2D
// It does reverse inorder traversal
void print2DUtil(struct Node* root, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(struct Node* root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}
// Driver program to test above
int main()
{
    int arr[] = { 7, 4, 12, 3, 6, 8, 1, 5, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Node* root = constructBst(arr, n);

    //printf("Inorder Traversal: \n");
    //inorderTraversal(root);
    print2D(root);
    return 0;
}
