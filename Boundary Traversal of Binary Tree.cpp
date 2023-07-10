
// Function to print the left boundary nodes of a binary
// tree
void printLeftBoundary(Node* root)
{
    while (root) {
        if (root->left || root->right) {
            cout << root->data << " ";
        }
        if (root->left) {
            root = root->left;
        }
        else {
            root = root->right;
        }
    }
}
 
// Function to print the right boundary nodes of a binary
// tree
void printRightBoundary(Node* root)
{
    if (!root) {
        return;
    }
    Node* curr = root->right;
    while (curr) {
        if (curr->left || curr->right) {
            cout << curr->data << " ";
        }
        if (curr->right) {
            curr = curr->right;
        }
        else {
            curr = curr->left;
        }
    }
}
 
// Function to print the leaves of a binary tree
void printLeaves(Node* root)
{
    if (!root) {
        return;
    }
    printLeaves(root->left);
    if (!root->left && !root->right) {
        cout << root->data << " ";
    }
    printLeaves(root->right);
}
 
// Function to print the boundary nodes of a binary tree in
// anticlockwise order
void printBoundary(Node* root)
{
    if (!root) {
        return;
    }
    cout << root->data << " ";
    printLeftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightBoundary(root);
}
