#include<iostream>
using namespace std;
#include"BST.h"
int main()
{
  BST *root=NULL;
  BST binary;
  binary.insert(80,&root);
  binary.insert(70,&root);
  binary.insert(90,&root);
  binary.insert(11,&root);
  binary.insert(76,&root);
  //binary.insert(35,&root);
  binary.print(root);
  binary.search(111,root);
  system("pause");
}