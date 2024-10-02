#include <stdio.h>

int main() {
	int n,i,r;
	n = 7;
	r = 0;
	for(i=0;i<=10;i++){
		r = n*i;
		printf("%d x %d = %d\n",n,i,r);
	}
   
    return 0;
}

