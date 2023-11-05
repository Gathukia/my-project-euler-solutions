#include<stdio.h>

int main(void){
	int i;
	long int x;
	i = 2;
	x = 600851475143;
	while(i < 10000n){
		if((x % i) == 0){
			x /= i;
			printf("%d\n",i);
		}else{
			i++;
		}

	}

}