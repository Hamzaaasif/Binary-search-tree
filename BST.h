#include<iostream>
using namespace std;
class BST
{
  public:
  void insert(int val,BST **root)
  {
    BST *ptr=new BST;
    ptr->value=val;
    ptr->rightchild=NULL;
    ptr->leftchild=NULL;
    if(*root==NULL)
    {
      *root=ptr;
    }
    else
    {
      BST *curr=*root;
      while(curr->leftchild!=NULL && curr->rightchild!=NULL)
      {
        if(curr->value > val)
        {
          curr=curr->leftchild;
        }
        else
        {
          curr=curr->rightchild;
        }
    }
        if(curr->value > val)
      {
        curr->leftchild=ptr;
      }
      else
      {
        curr->rightchild=ptr;
      }
    }
  }
void search(int value,BST *root)
{
  BST *curr=root;
  int count=0;
  while(curr->value!=value)
  {
    if(curr->value  > value)
    {
      curr=curr->leftchild;
    }
    else
    {
      curr=curr->rightchild;
    }
    if(curr==NULL)
    {
      count++;
      break;
    }
  }
  if(count==0)
  {
    cout<<"Value found : " << curr->value<<endl;
  }
  else
  {
    cout<<"Value not found "<<endl;
  }
}
  void print(BST *root)
  {
    BST *curr=root;
    cout<<"Root Value : "<<root->value <<endl;
    cout<<"Root Left Value : "<<(root->leftchild)->value <<endl;
    cout<<"Root Right Value : "<<(root->rightchild)->value <<endl;
    root=root->leftchild;
    cout<<"Root left Left Value : "<<(root->leftchild)->value <<endl;
    cout<<"Root left Right Value : "<<(root->rightchild)->value <<endl;
    

  }
  private:
  int value;
  BST *leftchild;
  BST *rightchild;
};