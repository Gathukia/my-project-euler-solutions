#include<stdio.h>

int main(void){
	int x,sum;
	sum = 0;
	for(x = 1;x < 1000;x++){
	if(((x % 3) == 0) || ((x % 5) == 0)){
	sum += x;
	}

	}
printf("the sum is %u\n",sum);
return 0;
}