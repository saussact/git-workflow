#include <stdio.h>

// 09.03.2021
// JM début implémentation

int main(int argc, char *argv[]){
	int p;
	int *ptr_p;
	
	ptr_p = &p;
	
	printf("hello\n");
	printf("call with %d args\n", (argc - 1));
	(*ptr_p) = 42;
	
	printf("p: %d ptr_p: %d\n", p, (*ptr_p));
	
	return 0;
}
