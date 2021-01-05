#include"symbol.h"
#include <string.h>
symbolTable  table ; 
/*############################# symbol ##########################*/
void initParas(symbol* entry,char* id,char* kind ,char* type,bool isFunc){
    entry->id = id;
    entry->kind = kind;
    entry->type = type;
    entry->isFunc = isFunc;
}
struct symbol *initSymbol(char* id,char* kind ,char* type,bool  isFunc){
    
    symbol* temp = (symbol*)malloc(sizeof(symbol));
   
    initParas(temp, id,kind,type,isFunc);
   /* if(temp1.isFunc == 1 )
    {
        temp1.parameters = (symbol*)malloc(sizeof(symbol);
        initParas(&temp1.parameters)

    }
    */
}  
void freeSymbol(symbol* symbol)
{
    symbol->parameters = NULL;
}

bool compareSymbol(symbol* s1,symbol* s2)
{
    if(strcmp(s1->id,s2->id) && strcmp(s1->type,s2->type))
    {
        return 1; 
    }
   
   return 0 ;    
}
bool compareSymbol_redeclatrion(symbol* s1,symbol* s2)
{
    if(strcmp(s1->id,s2->id))
    {
        return 0; 
    }
   
   return 1;    
}

/*############################# node  ##########################*/
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


/*############################## symbol list ##########################*/

struct symbolList* initSymbolList(symbol* symbol)
{
        symbolList* temp = (symbolList*)malloc(sizeof(symbolList));
        temp->entry = symbol;
        temp->next = NULL;
        temp->parent =NULL;
        return temp;

}
struct symbolList* initSymbolList1()
{
        symbolList* temp = (symbolList*)malloc(sizeof(symbolList));
        temp->entry = NULL;
        temp->next = NULL;
        temp->parent =NULL;
        return temp;

}
struct symbol* find_symbol(symbol* symbol, symbolList* symbolList)
{
    if(compareSymbol(symbolList->entry , symbol))
    {
        return symbolList->entry;
    }
    
    while(symbolList->next != NULL)
    {
        symbolList = symbolList->next;
        if(compareSymbol(symbolList->entry , symbol))
        {
            return symbolList->entry;
        }
    }
   
   return NULL;

}

bool find_redelcatrion(symbol* symbol , symbolList* symbolList1)
{
 
    if(compareSymbol_redeclatrion(symbolList1->entry , symbol))
    {
        return 1;
    }
    
    while(symbolList1->next != NULL)
    {
        symbolList1 = symbolList1->next;
        if(compareSymbol_redeclatrion(symbolList1->entry , symbol))
        {
            return 1;
        }
    }
   
    return 0;

  
}
void delete(symbol* newsymbol,symbol* oldsymbol ){

    oldsymbol->kind = newsymbol->kind;


}

void insert_symbol(symbol* symbol , symbolList* symbolList1)
{
    if(find_symbol(symbol,symbolList1) != NULL)
    {
       symbolList1->next = (symbolList*)malloc(sizeof(symbolList));
       symbolList1->next->entry = symbol;
     
    }
    else
    {
       if(!find_redelcatrion(symbol,symbolList1))
       {
           printf( "%s already reladrted with the same type " , symbol->id);
           
       }
       else
       {
           delete(find_symbol(symbol,symbolList1),symbol);
           
       }
       
    }
    



}
/*############################## symbol table  ##########################*/


 struct symbolTable initTable(){
        table.checkMain=0;
        table.globalTable=initSymbolList1();
        table.currentTable=initSymbolList1();
        table.tree=NULL;
        return table;
}


void startCode(node *tree){
    initTable();
    checkTree(tree); 

    }


void insert(symbolTable* sList,symbol* s){
    insert_symbol(s,sList);
}
void addParent(symbolList* parent,symbolList* child){
    child->parent=parent;

}
char* checkCurrentNode(char* token){

    if(strcmp("vardeclare",token))
        return "vardeclare";
    if(strcmp("funcdeclar",token))
        return "funcdeclar"; 
    if(strcmp("PROC",token))
        return "PROC";                 
        
}
void insertFunc(node * tree){
    symbol* entry=initSymbol(tree->node2,"FUNC",tree->node3,1);
    //symbol *paramenters=initSymbol()
}
void insertVar(node * tree ){
    symbol* entry=initSymbol(tree->node2,"VAR",tree->node3,0);
    insert_symbol(entry,table.currentTable);
    if(entry->id=="main")
        table.checkMain++;
    
    
}
void checkTree(node* tree){
    if(strcmp("vardeclare",tree->token)){
        insertVar(tree);
    }
    if(tree->node1)
        checkTree(tree->node1); 
    if(tree->node2)
        checkTree(tree->node2);
    if(tree->node3)
        checkTree(tree->node3);               
    if(tree->node4)
        checkTree(tree->node4);
    if(tree->node5)
        checkTree(tree->node5);
    if(tree->node6)
        checkTree(tree->node6);       
}









