#include <stdlib.h>
#include <stdio.h>
#include <cstring>

int fun(char* pass){
	int res = 0;
	char p[16];
	strcpy(p,pass);
	if(strcmp("12345678",p)){
		res = 0;
	}else{
		res = 1;
	}
	return res;
}

int main(int argc, char *argv[]){
        if(fun(argv[1])){
                printf("granted \n");
        }else{
                printf("denied \n");
        }
        return 0;

}

