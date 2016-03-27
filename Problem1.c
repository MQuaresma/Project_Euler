#include <stdio.h>

int main(){
	int x, a = 0;

	for(x = 0;x < 1000; x ++){
		if(x % 5 == 0 || x % 3 == 0)
			a += x;
	}


	printf("%d\n", a);
	return 0;
}