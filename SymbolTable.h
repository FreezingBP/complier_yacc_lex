#ifndef HEADER_FILE
#define HEADER_FILE
#define max 10
#define tableSize 100
/////////////////////////// ast /////////////////

typedef struct node {
char *token; struct node *node1,*node2, *node3,*node4,*node5,*node6;
char* type;
} node;

node *initNodes(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6);
node *makenode(char *token); 
node *makeTree6(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6);
node *makeTree5(char *token,node *node1,node* node2,node* node3,node* node4,node* node5);
node *makeTree4(char *token,node *node1,node* node2,node* node3,node* node4);
node *makeTree3(char *token,node *node1,node* node2,node* node3);
node *makeTree2(char *token,node *node1,node* node2);
node *makeTree1(char *token,node *node1);

void addChild(node *parent,node *child);
void printtree(node *tree, int index);









//////////////////////// symbol ///////////////////////////////////
typedef struct symbol {
char*  id;
char*  kind;
char* type;
int isFunc;
int paraNum;
char* returnType;
struct symbol* params;
} symbol;

typedef struct symbolTable {
 int scope;   
struct symbol entries[tableSize];
int isMainExist;
int top;
} symbolTable;
typedef struct Data {
struct symbolTable tables[tableSize];
int top;
int countMain;
} Data;

typedef struct stack {
struct symbolTable data[max];
	int top;

}stack;

struct symbol initSymbol(char*,char*,char*,int,int);
int compareSymbols(struct symbol,struct symbol);
struct symbolTable  initTable();
void insertSymbol(struct symbolTable*,struct symbol);
int lookup(struct symbolTable*,struct symbol);
void  initData(struct Data*);
void addTable(struct Data*,struct symbolTable);
int isDeclared(char*,struct  symbolTable* );
int typeCheck(char* type,struct  symbol s);
struct symbol* getSymbol(char* id,struct  symbolTable* table);
int isNumber(char* type);
int isInt(char* type);
int isBool(char* type);












void initStack(struct stack *);
int empty(struct stack *);
int full(struct stack *);
void push(struct stack *,struct symbolTable);
struct symbolTable pop(struct stack *);
void print(struct stack *);



void scanTree(struct node* tree,struct symbolTable* table );
void insertVar(struct node* tree,struct symbolTable* table);
void insertFunc(struct node* tree,struct symbolTable* table);

void startCode(struct node* tree,struct symbolTable* table);
void initTable1(struct symbolTable* table);
void assignmentCheck(struct node* tree,struct symbolTable* table);
void insertParams(struct node* tree,struct symbol* s1);
int mainCount(struct symbolTable* table);










#endif
