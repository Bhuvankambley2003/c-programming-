/* A binary tree node has data,
pointer to left child and a
pointer to right child */
#include<stdio.h>
#include<stdlib.h>
#define COUNT 10

struct Node
{
    int data;
    struct Node* left, *right;
};

/* Helper function that allocates a
new node */
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

// Function to insert nodes in level order
struct Node* insertLevelOrder(int arr[], int i, int n)
{
      struct Node *root = NULL;
    // Base case for recursion
    if (i < n)
    {
        root = newNode(arr[i]);

        // insert left child
        root->left = insertLevelOrder(arr,2 * i + 1, n);

        // insert right child
        root->right = insertLevelOrder(arr,2 * i + 2, n);
    }
    return root;
}

// Function to print tree nodes in
// InOrder fashion
void inOrder(struct Node* root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void preOrder(struct Node* root)
{
    if (root != NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node* root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
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
// Driver program to test above function

int main()
{
    int arr[] = { 1,7,5,8,9,0,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    struct Node* root = insertLevelOrder(arr, 0, n);
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
    //print2D(root);
}
