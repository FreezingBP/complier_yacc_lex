#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include "tree.h"


int main(){


    node* leaf1=makenode("n1");
    node* leaf2=makenode("n2");
    node* leaf3=makenode("n3");
    node* leaf4=makenode("n4");
    node* leaf5=makenode("n5");
    node* leaf6=makenode("n6");
    node* leaf7=makenode("n7");
    node* leaf8=makenode("n8");
    node* leaf9=makenode("n9");
    node* leaf10=makenode("n10");
    node* subtree1=makeTree4("subtree1",leaf1,leaf2,leaf3,leaf4);
    node* subtree2=makeTree3("subtree2",leaf5,leaf6,leaf7);
    node* subtree3=makeTree3("subtree3",leaf8,leaf9,leaf10);
    node* root=makeTree2("root",subtree1,subtree2);
    
    
    return 0;


}
