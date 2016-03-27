#include <stdio.h>

int main(){
	int x = 2, a = 0, y = 1, z;

	while(x < 4000000){
		if(x % 2 == 0) a += x;
		z = x;
		x = x + y;
		y = z;
	}

	printf("%d\n", a);

	return 0;
}