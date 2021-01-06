%{
#include<stdio.h>
#include<stdlib.h>
#include"lex.yy.c"
#include "SymbolTable.h"
struct symbolTable table;

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
program: declaration-list{   printtree($1,0);startCode($1,&table);}  | %empty;

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
var-declaration: var-assignment{$$=makeTree1("assignment",$1);} 
| VAR ID more-vars DECLARE data-type EOL {node* t1=makeTree2("id's",makenode($2),$3);$$=makeTree2("vardeclare",t1,$5);} |
VAR ID more-vars DECLARE STRING '['NUM']' EOL  ;
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
more-val: val opperators val{ node* opar=$2; $$=makeTree1("",makeTree2(opar->token,$1,$3));}| 
 val opperators  more-val {struct node* opar1=$2; ;$$=makeTree2(opar1->token,$1,$3);} | %empty  ; 
val: ID{$$=makenode($1);} |
NUM {$$=makenode($1);}|
ADDRESS ID {$$=makenode($2);} |
POWER val |
STRINGVALUE {$$=makenode($1);} ; 
opperators: mulop{$$=$1;} | addop{$$=$1;} |relop{$$=$1;};                              
expr:  simple-expression logical-op expr  | simple-expression{$$=$1;};
simple-expression: additive-expression relop additive-expression{struct node* t=$2;t->node1=$1;t->node2=$3;$$=t;} |
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
    s.kind=kind;s.isFunc=isFunc;s.paraNum=par;
   // printf("symbol creaded successfully !! \n");
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
        printf("table creaded successfully !!\n ");//


}

void insertSymbol(struct symbolTable* table,struct symbol s1 ){
    if(lookup(table,s1)==0){
        table->top++;
        table->entries[table->top]=s1;
        //printf("symbol add successfully !!\n");
    }
    else{
        printf("already declared !!\n");
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
/*
void  initData(struct Data* data){
    struct Data data;
    data->top=-1;
    data->countMain=0;
    return data;
        printf("data creaded successfully !! \n");

}
void addTable(struct Data* data,struct symbolTable table){
    data->top++;
    data->tables[data->top]=table;
            printf("table added successfully !!\n ");


}
*/
////////////////  work with tree //////////////////
void insertVar(struct node* tree,struct symbolTable* table){
    struct symbol s1=initSymbol(tree->node1->node1->token,tree->node2->token,"Var",0,0);
    insertSymbol(table,s1);
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
                return &table->entries[i];
                
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
    char* type=tree->node1->node2->token;
    struct symbol* s1=getSymbol(id,table);
   
    
      if(!isDeclared(id,table)){
    printf("error:'%s' is not declared!\n",id);
        exit(1);
      } 
      
      if(strcmp(s1->type,"int")==0){
          if(!isInt(type)){
              printf("error:type ok!\n");
    
          }
      }
      
     


      
}         
//////// func check    ////////
void insertParams(struct node* tree,struct symbol* s1){


}

void insertFunc(struct node* tree,struct symbolTable* table){
struct symbol s1=initSymbol(tree->node1->token,tree->node2->token,"func",1,0);
        if(strcmp(s1.id,"main")==0){
            table->isMainExist++;
        }
    insertSymbol(table,s1);
    //insertParams(tree->node3,s1);

}
int mainCount(struct symbolTable* table){
    int count=0;
        if(table->top==-1)
            return 0;
        count=table->isMainExist;

    
    return count;

}

      
//////// ///////////////// ////////

void scanTree(struct node* tree,struct symbolTable* table ){
    if(strcmp("vardeclare",tree->token)==0){
        
        insertVar(tree,table);
    }
    if(strcmp("assignment",tree->token)==0){
        assignmentCheck(tree,table);

    }
    if(strcmp("func",tree->token)==0){
       insertFunc(tree,table);

    }
    
    if(tree->node1)
        scanTree(tree->node1,table);
    if(tree->node2)
        scanTree(tree->node2,table);
    if(tree->node3)
        scanTree(tree->node3,table);
     if(tree->node4)
        scanTree(tree->node4,table);
    if(tree->node5)
        scanTree(tree->node5,table);
    if(tree->node6)
        scanTree(tree->node6,table);                   
}    
void startCode(struct node* tree,struct symbolTable* table){
   // initStack(&st);
   // initData(&data);
     initTable1(table);
    scanTree(tree,table);
    if(mainCount(table)>1){
    printf("error: function main already exist!\n");

    }
    if(mainCount(table)<1){
    printf("error: function main is not exist!\n");
    }
    
}

    




