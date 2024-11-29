#include <iostream>
using namespace std;
class BST {
private:
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    node* root = NULL;

    node* insert(node* ro, int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        if (ro == NULL)
            ro = newNode;
        else if (value < ro->data)
            ro->left = insert(ro->left, value);
        else
            ro->right = insert(ro->right, value);
        return ro;
    }

    node* Search(node* ro, int key)
    {
        if (ro == NULL)
            return NULL;
        else if (ro->data == key)
            return ro;
        else if (ro->data < key)
            return Search(ro->right, key);
        else
            return Search(ro->left, key);
    }

    bool Search(int key)
    {
        node* result = Search(root, key);
        if (result == NULL)
            return false;
        else
            return true;
    }





    int MinValue(node* ro)
    {
        int minValue = ro->data;
        while (ro->left != NULL)
        {
            minValue = ro->left->data;
            ro = ro->left;
        }
        return minValue;
    }

    node* Delete(node* ro, int key)
    {
        if (ro == NULL)
            return root;
        if (key < ro->data)
            ro->left = Delete(ro->left, key);
        else if (key > ro->data)
            ro->right = Delete(ro->right, key);
        else
        {
          
            if (ro->left == NULL)
                return ro->right;
            else if (ro->right == NULL)
                return ro->left;

           
            ro->data = MinValue(ro->right);

            ro->right = Delete(ro->right, ro->data);
        }
        return ro;
    }

    void Inorder(node* ro)
    {
        if (ro == NULL)
            return;
        Inorder(ro->left);
        cout << ro->data << " ";
        Inorder(ro->right);
    }

    void Postorder(node* ro)
    {
        if (ro == NULL)
            return;
        Postorder(ro->left);
        Postorder(ro->right);
        cout<<ro->data<<" ";
    }

    void Preorder(node* ro)
    {
        if (ro == NULL)
            return;
        cout<<ro->data<<" ";
        Preorder(ro->left);
        Preorder(ro->right);
    }

  

public:
    void insert(int value)
    {
        root = insert(root, value);
    }
    
    void display()
    {
        cout << "Inorder:\n";
        Inorder(root);
        cout << "\nPreorder:\n";
        Preorder(root);
        cout << "\nPostorder:\n";
        Postorder(root);
    }

    void remove(int data)
    {
        if (Search(data))
            root = Delete(root, data);
        else
            cout << "\nelement not found\n";
    }

    void search(int key)
    {
        if (Search(key))
            cout << "\nelement found\n";
        else
            cout << "\nelemant not found\n";
    }

    

};
int main()
{
    BST tree;
    tree.insert(6);
    tree.insert(7);
    tree.insert(70);
    tree.insert(9);
    tree.insert(4);
    tree.insert(5);
    tree.display();
    tree.remove(66);
    tree.remove(70);
    tree.display();
    tree.search(100);
    tree.search(7);

    

}