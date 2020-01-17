int count=0;
int countNode(Node* root){
    int leafCount=0;
    int center=fun(root);
    leafCount=count;
    return leafCount;
}

int fun(Node* root )
{
    int righ;
    if(root->left!=NULL)
    {
        int lef=fun(root->left);
        if(root->right!=NULL)
        {
            righ=fun(root->right);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            count++;
        }
        else
        {
             righ=fun(root->right);
        }
    }
    return=0;
}

