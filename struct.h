#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//text aani bss sathi symbol table structre
typedef struct symbolTabl{
	int index;
	int lineNo;
	char *name;
	char *type;
	char *section;
	char *value;
	struct symbolTabl *pNext;
}sTable;


typedef struct textSymbolTable{
	int index; 
	int lineNo;
	int value;
	char *name;
	char *type;
	char *section;
	struct textSymbolTable *pNext;
}tSymbolTable;


typedef struct opcodeTable{
	char *mn;
	char *opcode1;
	char *opcode2;
	char *opcode;
	struct opcodeTable pNext;
}opTable;


typedef struct mnemonic{
	char mnemonicName;
	int value;
	struct mnemonic *next
}mnemonicNode;


typedef struct registers{
	char *regName;
	struct registers *next;
}registerNode;




int oP_Tab_main(opTable **pHead);
int optable(opTable **ppHead,char *opcode,char *instr,char *op1,char *op2);
