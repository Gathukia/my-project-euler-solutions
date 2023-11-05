#include<stdio.h>
int reverse(int a);

int main(void){
	int x,y,z,reverse1,max = 0;
	for(x = 100;x < 1000;x++){
		for(y = 100;y < 1000;y++){
		z = y * x;
		reverse1 = reverse(z);
		if(z == reverse1){
			if(z > max)max = z;
			printf("the number is %u\n",max);
			break;
		}
	}

	} 
return 0;
}

int reverse(int a){
	int remainder,b = 0;
	while(a != 0){
		remainder = a % 10;
		b = b * 10 + remainder;
		a /= 10;
	}
return  b;
}