#include <stdio.h>

int isPrime(int n){
	int i = 1, a = 0;

	while(i <= n){
		if(n % i == 0) a ++;
		i ++;
	}

	if(a > 2) return 0;
	else return 1;
}



int main(){
	long int x = 600851475142;

	while(x != 0){
		if(isPrime(x)){
			if(600851475143 % x == 0){
				printf("%ld\n", x);
				x = 0;
			}else x --;
		}
		else x --;
	}

	return 0;
}