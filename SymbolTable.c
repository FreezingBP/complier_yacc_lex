#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "SymbolTable.h"
//#include "SymbolTable.c"

//struct stack st;
//struct Data data;
//struct symbolTable table;

int main(){
    Data data;
    symbolTable table;
    table=initTable();
    
    
    addTable(&data,table);
symbol a=initSymbol("x","int","var",0,0);
symbol b=initSymbol("x","int","var",0,0);
  insertSymbol(&data.tables[data.tables->top],a);
  insertSymbol(&data.tables[data.tables->top],b);
 



 return 0;
}
////////////////// ast functions ///////////////////////

node *initNodes(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
node *newnode = (node*)malloc(sizeof(node)); 
char *newstr = (char*)malloc(sizeof(token) + 1); 
strcpy(newstr,token);
newnode->node1 = node1;
newnode->node2 = node2;
newnode->node3 = node3;
newnode->node4 = node4;
newnode->node5 = node5;
newnode->node6 = node6;
newnode->token = newstr; 
return newnode; 
}
node *makenode(char *token) {
return initNodes(token,NULL,NULL,NULL,NULL,NULL,NULL);
}
node *makeTree6(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
    return initNodes(token,node1,node2,node3,node4,node5,node6);
}
node *makeTree5(char *token,node *node1,node* node2,node* node3,node* node4,node* node5){
    return initNodes(token,node1,node2,node3,node4,node5,NULL);

}
node *makeTree4(char *token,node *node1,node* node2,node* node3,node* node4){
    return initNodes(token,node1,node2,node3,node4,NULL,NULL);

}
node *makeTree3(char *token,node *node1,node* node2,node* node3){
    return initNodes(token,node1,node2,node3,NULL,NULL,NULL);

}
node *makeTree2(char *token,node *node1,node* node2){
    return initNodes(token,node1,node2,NULL,NULL,NULL,NULL);

}
node *makeTree1(char *token,node *node1){
    return initNodes(token,node1,NULL,NULL,NULL,NULL,NULL);

}
void addChild(node *parent,node *child){
    if(parent->node1==NULL){
        parent->node1=child;
        return;
    }
    if(parent->node2==NULL){
        parent->node2=child;
        return;
    }
    if(parent->node3==NULL){
        parent->node3=child;
        return;}
    if(parent->node4==NULL){
        parent->node4=child; 
        return;
        }                      
    if(parent->node5==NULL){
        parent->node5=child;
        return;
         }   
    if(parent->node6==NULL){

        parent->node6=child;
        return;
        }
}






void printtree(node *tree, int index) {
printf("%s\n", tree->token);
printf("%*s",index,"");
 if(tree->node1)
printtree(tree->node1,index+1); 
if(tree->node2)
printtree(tree->node2,index+1); 
if(tree->node3)
printtree(tree->node3,index+1); 
if(tree->node4)
printtree(tree->node4,index+1); 
if(tree->node5)
printtree(tree->node5,index+1); 
if(tree->node6)
printtree(tree->node6,index+1); 
}

//////////////////////   stack functions ////////////////////////////////
void initStack(struct stack *s)
{                                     
 s->top=-1;
}

int empty(struct stack *s)
    {
      if(s->top == -1)
      {
      return(1);
      }
     return(0);
    }

int full(struct stack *s)
    {
     if(s->top == max-1)
     {
     return(1);
     }
     return(0);
    }

void push(struct stack *s, struct symbolTable x)
    {
    s->top = s->top+1;
    s->data[s->top]=x;
    }

struct symbolTable pop(struct stack *s)
    {
    struct symbolTable x;
    x=s->data[s->top];
    s->top=s->top-1;
    return(x);
    }

//////////////////////// symbol functions ////////////////////////////////
struct symbol initSymbol(char* id,char* type,char* kind,int isFunc,int par){
    struct symbol s ;
    s.id=id;
    s.type=type;
    s.kind=kind;s.isFunc=isFunc;;s.paraNum=par;
    printf("symbol creaded successfully !! \n");
    return s;
}
int compareSymbols(struct symbol s1,struct symbol s2){
    if(strcmp(s1.id,s2.id)!=0){
        return 0;
    }
    return 1;

}
//////////////////////  symbol table functions ////////////////
void initTable1(struct symbolTable* table){
    table->isMainExist=0;
    table->top=-1;
}

struct symbolTable  initTable(){
    struct symbolTable table;
    table.isMainExist=0;
    table.top=-1;
    return table;
        printf("table creaded successfully !!\n ");


}

void insertSymbol(struct symbolTable* table,struct symbol s1 ){
    if(lookup(table,s1)==0){
        table->top++;
        table->entries[table->top]=s1;
       // printf("symbol add successfully !!\n");
    }
    else{
        printf("already declared !!\n");
        exit(1);
    }


}

int lookup(struct symbolTable* table,struct symbol s1){
    for(int i=0;i<=table->top;i++){
        if(compareSymbols(table->entries[i],s1)==1){
            return 1;
        }
    }
    return 0;
}


int xx(){
    {
    
    int x;
    {
        
        x=7.0;
        return x;

    }
    return x;
    }
    return 0;
}
///////////////////////  data functions ///////////////////

void  initData(struct Data* data){
    struct Data data;
    data->top=-1;
    data->countMain=0;
    return data;
        printf("data creaded successfully !! \n");//

}
void addTable(struct Data* data,struct symbolTable table){
    data->top++;
    data->tables[data->top]=table;
            printf("table added successfully !!\n ");


}

////////////////  work with tree //////////////////
void startCode(struct node* tree,struct symbolTable* table){
   // initStack(&st);
   // initData(&data);
     initTable1(table);

    scanTree(tree,table);
    
}
void scanTree(struct node* tree,struct symbolTable* table ){
    if(strcmp("vardeclare",tree->token)==0){
        insertVar(tree,table);

    }
    if(strcmp("assignment",tree->token)==0){
        assignmentCheck(tree,table);

    }
    
    

}
void insertVar(struct node* tree,struct symbolTable* table){
    struct symbol s1=initSymbol(tree->node1->node1->token,tree->node2->token,"Var",0,0);
    insertSymbol(&table,s1);
}
int isDeclared(char* id,struct  symbolTable* table){
    for (int i = 0; i <= table->top; i++)
        {   if(strcmp(id,table->entries[i].id)==0)
                return 1;

        }  
        return 0;   
}
struct symbol* getSymbol(char* id,struct  symbolTable* table){
    for (int i = 0; i <= table->top; i++)
        {   if(strcmp(id,table->entries[i].id)==0){
                
                return  &table->entries[i];
        }
        }  
        return NULL;   
}
int typeCheck(char* type,struct  symbol s){
    if(strcmp(type,s.type)==0)
        return 1;

    return 0;
        
}
int isNumber(char* type){
    int len=strlen(type);
    for (int i = 0; i < len; i++){   
        if (!isdigit(type[i])) 
        return 0;
    }
    return 1;

}
int isInt(char* type){
    int len=strlen(type);
    for (int i = 0; i < len; i++){   
        if (type[i]=='.' || isdigit(type[i])==0) 
        return 0;
    }
    return 1;

}

void assignmentCheck(struct node* tree,struct symbolTable* table){
    char* id=tree->node1->node1->token;
    char* type=tree->node2->node1->token;
    struct symbol* s1=getSymbol(id,table);
      if(!isDeclared(id,table)){
    printf("error:'%s' is not declared!\n",id);
      } 
      if(strcmp(s1->type,"int")==0)
      {
          if(!isInt(type)){
            printf("error:'type dismatch !\n");

          }

      }

}

