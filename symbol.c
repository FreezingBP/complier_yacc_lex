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









