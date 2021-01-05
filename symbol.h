

typedef enum {false = 0, true= 1 } bool; 
typedef struct symbol {
char * id;
char * kind,type;
int isFunc;
int paraNum;

struct symbol *parameters;

} symbol;


 
 typedef struct node {
char *token; struct node *node1,*node2, *node3,*node4,*node5,*node6;

} node;

typedef struct symbolList {
symbol* entry;
struct symbolList *parent;
struct symbolList *next;


} symbolList;

 typedef struct symbolTable {
struct symbolList *globalTable;
struct symbolList *currentTable;
int checkMain;
struct node *tree;


} symbolTable;



/*################################ nodes functions #############################33*/
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

/*################################ symbol  functions #############################33*/
struct symbol *initSymbol(char* id,char* kind  ,char* type,bool isFunc);    
void initParas(symbol* entry,char* id,char* kind ,char* type,bool  isFunc);
//void printSymbol(symbol symbol);
void freeSymbol(symbol* symbol);
bool compareSymbol(symbol* s1,symbol* s2);
 //bool checkId(symbol s,chaar* id); // no need for now 

 bool compareSymbol_redeclatrion(symbol* s1,symbol* s2);



/*################################ symbol list  functions #############################33*/
struct symbolList* initSymbolList(symbol* symbol);
void insert_symbol(symbol* , symbolList*);
struct symbol* find_symbol(symbol* , symbolList*);
void free_symbolslist(symbolList*);
struct symbolList* initSymbolList1();
void delete(symbol* , symbol*);
//void print_symbolslist()
bool find_redelcatrion(symbol* , symbolList*);


/*################################ symbol tablefunctions #############################33*/

struct symbolTable initTable();
void insert(symbolTable*,symbol*);
void addParent(symbolList*,symbolList*);
void startCode(node *tree);
void insertVar(node * tree );
void checkTree(node* tree);










