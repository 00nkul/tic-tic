#include<stdio.h>
#include<stdlib.h>

void rradominrange( int lower, int higher,int nomber){
	int i;
	for(i=0;i<nomber;i++){
		int num=(rand()%(higher-lower+1))+lower;
		printf("%d\n",num);
	}
}

void main(){
	int i ,n;
	n=5;
	srand(time(0));
	for(i=0;i<50;i++){
		printf("%d\n",rand()%50);
	}
	printf("\n\n");
	rradominrange(10,20,5);	
		
}
