#include<stdio.h>

int main(void){
	int x,y,z,sum,sum2,difference;
	 while(x <= 100){
	 	z += x;
	 	y = x;
	 	sum2 += (y * y);
	 	x++;
    }
sum = (z * z);
difference = sum - sum2;
printf("the no is %d\n",difference);
}