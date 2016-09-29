#include<stdio.h>
#include<string.h>
#include "functions.h"
void main(int argc,char *argv[]){
	FILE *fp=fopen(argv[1],"r");
	char buff[255];

	if(argc!=2){printf("\nplease provide assembly file :)\n");return;} //check file provided or not
while(buff){
	fscanf(fp,"%s",buff);
	printf("%s\n",buff);}
	if(strcmp("section ",buff)==0){
		fscanf(fp,"%s",buff);

		/*if(strcmp(".data",buff)==0){dataSection();}*/
		/*if(strcmp(".bss",buff)==0){bssSection();}*/
		/*if(strcmp(".text",buff)==0){textSection();}*/
	}



}
