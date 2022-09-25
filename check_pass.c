#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char pass[20];
	printf("Saisissez stp le MDP: ");
	scanf("%s",pass);
	if (!strcmp(pass, "0123")){
	printf("BRAVO  !!!!!! :) ");
	}	
	else { 
        printf ("Not correct ");
	exit(1337);
	}
	exit(0); 
}
