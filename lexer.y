%{
#include<stdio.h>
#include<stdlib.h>
#include"lex.yy.c"
#include"symbol.h"




%}
// Tokens Definition
%token BCOMMENT
%token ECOMMENT
%token IF
%token ELSE
%token INT
%token RETURN
%token VOID
%token WHILE
%token PLUS
%token MINUS
%token MULTIPLY
%token DIVIDE
%token LESS_THAN
%token LESS_OR_EQUAL
%token GREATER_THAN
%token GREATER_OR_EQUAL
%token EQUALS
%token ASSIGNMENT
%token NOT_EQUALS
%token EOL
%token COMMA
%token LEFT_PARANTHESIS
%token RIGHT_PARANTHESIS
%token LEFT_BRACKET
%token RIGHT_BRACKET
%token LEFT_SQR_BRACKET
%token RIGHT_SQR_BRACKET
%token DECLARE
%token VAR BOOL CHAR  STRING INT_P CHAR_P REAL_P FUNC PROC NULL_P LOGICAL_P AND POWER NOT OR LENGTH  REAL_VALUE 
%token REAL LOGICAL_AND  '(' ')' ADDRESS NL SYMPOL 
%union {
 
   char *valueToShow;
   struct node* n;
}
%token<valueToShow> STRINGVALUE 
%token<valueToShow> ID
%token<valueToShow> FUNCID
%token<valueToShow> INT_VALUE 
%token<valueToShow> BOOL_VALUE 
%token<valueToShow> NUM
%right '='
%left '<' '>'
%left '+' '-'
%left '*' '/'
%right '!'








%type<n> program declaration-list declaration S iter-statment options parvalue    
%type<n> funcall funcallpar val opperators mulop addop var-assignment more-vars data-type 
%type<n> var-declaration func-declaration proc-declaration comment return-value 
%type<n> return-val more-val expr simple-expression ST ST1 body term factor additive-expression relop parameter_list  

%%
program: declaration-list{  symbolTable table;  printtree($1,0);startCode($1,table);}  | %empty;

declaration-list: /*empty*/{$$=makenode("");}|
declaration-list options  {$$=makeTree2("",$1,$2);} |
declaration {$$=makeTree1("",$1);}|
 S{$$=makeTree1("",$1);}  |
iter-statment {$$=makeTree1("",$1);};
declaration: var-declaration{$$=makeTree1("",$1);} |
func-declaration{$$=makeTree1("",$1);}  | 
proc-declaration {$$=makeTree1("",$1);} |
funcall{$$=$1;} |
 comment{$$=makeTree1("",$1);}|
 '{'declaration-list '}'{$$=makeTree2("BLOCK",$2,makenode("ENDOFBLOCK"));};
options : declaration{$$=makeTree1("",$1);} 
|S{$$=makeTree1("",$1);} 
|comment {$$=makeTree1("",$1);} 
|iter-statment{$$=makeTree1("",$1);};
var-declaration: var-assignment{$$=makeTree1("var assignment",$1);} 
| VAR ID more-vars DECLARE data-type EOL {node* t1=makeTree2("id's",makenode($2),$3);$$=makeTree2("vardeclare",t1,$5);}|
VAR ID more-vars DECLARE STRING '['NUM']' EOL ;
funcall: ID '(' ')' EOL{$$=makeTree1("funcCall",makenode($1));}|
ID ASSIGNMENT ID '(' ')' EOL{$$=makeTree2("FUNCCALL",makenode($1),makenode($3));} |
ID '(' funcallpar ')' EOL {$$=makeTree2("FUNCCALL",makenode($1),$3);}| ID ASSIGNMENT ID '(' funcallpar ')' EOL{$$=makeTree3("funcCall",makenode($1),makenode($3),$5);};
parvalue : ID{$$=makenode($1);} |NUM{$$=makenode($1);};
funcallpar : parvalue COMMA funcallpar {$$=makeTree2("parameter list",$1,$3);}  |
 parvalue {$$=$1;}  ;
data-type: INT{$$=makenode("int");} | REAL{$$=makenode("real");} | 
CHAR {$$=makenode("char");}| 
BOOL{$$=makenode("bool");} |
INT_P{$$=makenode("int pointer");} |
REAL_P {$$=makenode("real pointer");}|
CHAR_P{$$=makenode("char pointer");} ;
func-declaration: FUNC ID '(' parameter_list ')' RETURN data-type '{' body RETURN return-value '}' declaration-list { $$=makeTree5("func",makenode($2),$4,$7,makeTree2("BODY",$9,$11),$13);}|
FUNC ID '(' parameter_list ')' RETURN data-type '{'  RETURN return-value '}' declaration-list { $$=makeTree5("func",makenode($2),$4,$7,$10,$12);};
proc-declaration: PROC ID '(' parameter_list ')'  '{' body  '}' declaration-list{ $$=makeTree4("PROC",makenode($2),$4,$7,$9);};
iter-statment : WHILE '(' expr ')' '{' body '}' {$$=makeTree2("while",$3,$6);} |
WHILE '(' expr ')' '{''}';
more-vars:  more-vars COMMA ID{$$=makeTree2("",$1,makenode($3));} |
COMMA ID {$$=makenode($2);}| 
%empty {$$=makenode("");};
var-assignment : ID ASSIGNMENT val EOL {$$=makeTree2("=",makenode($1),$3);}| 
ID ASSIGNMENT more-val EOL {$$=makeTree2("=",makenode($1),$3);} ;
more-val: val opperators val{node* opar=$2; $$=makeTree1("",makeTree2(opar->token,$1,$3));}| 
 val opperators  more-val {node* opar1=$2; ;$$=makeTree2(opar1->token,$1,$3);} | %empty  ; 
val: ID{$$=makenode($1);} |
NUM {$$=makenode($1);}|
ADDRESS ID {$$=makenode($2);} |
POWER val |
STRINGVALUE {$$=makenode($1);} ; 
opperators: mulop{$$=$1;} | addop{$$=$1;} |relop{$$=$1;};                              
expr:  simple-expression logical-op expr  | simple-expression{$$=$1;};
simple-expression: additive-expression relop additive-expression{node* t=$2;t->node1=$1;t->node2=$3;$$=t;} |
 additive-expression;
relop: LESS_THAN{$$=makenode("<");} |
LESS_OR_EQUAL{$$=makenode("<=");} |
GREATER_THAN {$$=makenode(">");}| 
GREATER_OR_EQUAL {$$=makenode("=>");}|
EQUALS {$$=makenode("==");}|
NOT_EQUALS{$$=makenode("!=");};
additive-expression: additive-expression addop term | term{$$=$1;};
addop: PLUS{$$=makenode("+");} | MINUS{$$=makenode("-");};
term: term mulop factor | factor{$$=makeTree1("",$1);};
mulop: MULTIPLY{$$=makenode("*");} | DIVIDE{$$=makenode("/");};
factor: LEFT_BRACKET expr RIGHT_BRACKET |
 ID {$$=makenode($1);}| 
  NUM {$$=makenode($1);};
logical-op : LOGICAL_AND | OR;
S: ST{ $$=$1;} ;
ST: IF '(' expr ')' '{' ST1 '}' ELSE '{' ST1 '}'{$$=makeTree3("if else",$3,$6,$10);}|
IF '(' expr ')' '{' ST1'}'{$$=makeTree2("if else",$3,makeTree1("",$6));};
ST1: body{$$=$1;}|ST{$$=$1;};
comment : BCOMMENT ID ECOMMENT{$$=makeTree3("comment",makenode("{"),makenode("}"),makenode($2));};



parameter_list : ID more-vars DECLARE data-type EOL parameter_list {$$=makeTree4("args",$4,makenode($1),$2,$6);}|
ID more-vars DECLARE data-type{$$=makeTree3("args",$4,makenode($1),$2);} |
/* empty */{$$=makenode("NONE");} ;
return-value: BOOL_VALUE EOL{$$=makeTree1("return",makenode($1));} |
NUM EOL {$$=makeTree1("return",makenode($1));}|
ID EOL {$$=makeTree1("return",makenode($1));} ;
body:/*empty*/{$$=makenode("empty");} | declaration-list{$$=$1;} ;

%%
int main(){
   yyparse();
   return 0;
}

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

/*############################# symbol ##########################*/
void initParas(symbol* entry,char* id,char* kind ,char* type,bool isFunc){
    entry->id = id;
    entry->kind = kind;
    entry->type = type;
    entry->isFunc = isFunc;
}
struct symbol *initSymbol(char* id,char* kind ,char* type,bool  isFunc){
    
    struct symbol* temp = (symbol*)malloc(sizeof(symbol));
   
    initParas(temp, id,kind,type,isFunc);
    return temp;
}  
void freeSymbol(symbol* symbol)
{
    symbol->parameters = NULL;
}

bool compareSymbol(symbol* s1,symbol* s2)
{
    if(strcmp(s1->id,s2->id)==0 && strcmp(s1->type,s2->type)==0)
    {
        return 1; 
    }
   
   return 0 ;    
}
bool compareSymbol_redeclatrion(symbol* s1,symbol* s2)
{
    if(strcmp(s1->id,s2->id)==0)
    {
        return 0; 
    }
   
   return 1;    
}

/*############################# node  ##########################*/

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
        symbolTable table;
        table.globalTable=initSymbolList1();
        table.currentTable=initSymbolList1();
        return table;
}


void startCode(node* tree,symbolTable table){
    table=initTable();
    checkTree(tree,table); 

    }


void insert(symbolTable* sList,symbol* s){
    insert_symbol(s,sList->currentTable);
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

void insertVar(node * tree ,symbolTable table){
    struct symbol* entry;
   entry= initSymbol(tree->node1->node1->token,"VAR",tree->node2->token,0);
   
   insert_symbol(entry,table.currentTable);
   // if(entry->id=="main")
      //  table.checkMain++;
    
    
}
void checkTree(node* tree,symbolTable table){
    if(strcmp("vardeclare",tree->token)==0){
       insertVar(tree,table);        
}
    if(tree->node1)
        checkTree(tree->node1,table);
    if(tree->node2)
        checkTree(tree->node2,table);
    if(tree->node3)
        checkTree(tree->node3,table);
    if(tree->node4)
        checkTree(tree->node4,table);
    if(tree->node5)
        checkTree(tree->node5,table);
    if(tree->node6)
        checkTree(tree->node6,table);                                     
}









