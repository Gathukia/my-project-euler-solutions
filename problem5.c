#include<stdio.h>


/*int main(void){
	int y,z;
	unsigned int x;
	for(x = 2;x >= 2;x++){
		y = 2;
		while(y <= 20){
			if((x % y) == 0){
				y++;
				if(y == 20){
					printf("the no is %d\n",x);
					goto done;
				}
			}else break;
		}	
	}
done:
return 0;	
}*/




int main(void){
	int x,y,z,smallest;
	x = 1,y =1,smallest = 0;
	while(x > 0){
		y = 1;
		while(((x % y) == 0) && (y <= 20)){
			if(y == 20){
			    smallest = x;
			    break;
			}
			y++;
		}
	x++;
	if(smallest > 0)break;
	}
printf("the number is %d\n",smallest);
}