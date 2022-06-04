#include <bits/stdc++.h>
using namespace std;
#define SPACE 5

struct Node
{
    int data;
    Node *left, *right;
    bool visit;
};

Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->visit = false;
    node->left = node->right = NULL;
    return (node);
}

Node *insertLevelOrder(int arr[], int i, int n)
{
    Node *root = nullptr;
    if (i < n)
    {
        root = newNode(arr[i]);

        root->left = insertLevelOrder(arr, 2 * i + 1, n);

        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

void print2D(Node *treeNode, int space)
{
    if (!treeNode)
        return;
    space += SPACE;
    print2D(treeNode->right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++)
        cout << " ";
    cout << treeNode->data << "\n";
    print2D(treeNode->left, space);
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main()
{
    int depth = 0;
    cin >> depth;
    depth = (pow(2, depth + 1)) - 1;
    int arr[depth];
    for (int i = 0; i < depth; i++)
    {
        arr[i] = i + 1;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = insertLevelOrder(arr, 0, n);
    print2D(root,10);
    //inOrder(root);
}