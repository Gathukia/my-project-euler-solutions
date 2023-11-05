#include<stdio.h>

int main(void){
	int sum,a,b,c;
	sum = a = b = c = 0;
	a = b = 1;
	while(c < 4000000){
		c = a + b;
		a = b;
		b = c;
		if((c % 2) == 0){
			sum += c;

		}

	}
	printf("the sum is %u\n",sum);
	return 0;
}