#include <stdio.h>
void printNumber(int len);
int main(){
	
	int lenght = 0;
	
		printf("please enter the lenght of your array ");
		scanf(" %d",&lenght);
		printNumber(lenght);

}
	void printNumber(int len){

		char array[len];
			for(int i =0;i<len;i++){
				printf("enter the %d element ",i+1);
				scanf(" %c",&array[i]);
				}
			for(int j=0;j<len;j++){
				if(array[j]>47 && array[j]<58){
					printf("the element %d is number and here it is %c\n",j+1,array[j]);
				}
			}

	}
