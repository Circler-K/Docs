#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
char buffer[256];
	if(argc < 2){
		printf("argv error\n");
		exit(0);
	}
	strcpy(buffer, argv[1]);
	printf("%s\n", buffer);

}
