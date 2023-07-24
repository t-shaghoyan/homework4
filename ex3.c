# include <stdio.h>
void  reverseArr(char *arr,int n,char *arr1);

int main(){

	int size = 0;
			printf("please enter the lenght of array ");
			scanf(" %d",&size);
	
	char sym[size];
			for(int j=0;j<size;j++){
				printf("please enter the %d element of array ",j+1);
				scanf(" %c",&sym[j]);
				}

	char revSym[size];
		
			reverseArr(sym,size,revSym);
	
	printf("the original array is %s\nthe reversed array is %s \n",sym,revSym);
// stex aranc funtion reversa	
/*
	for(int j=0,i=size-1;j<size;j++){
		printf("please enter the %d element of array ",j+1);
		scanf(" %c",&sym[j]);
		revSym[i]=sym[j];
		i--;
	}

	for(int k=0;k<size;k++){
		printf("the reversed elements is %c\n",revSym[k]);
	}
*/

}
	void  reverseArr(char * arr,int n,char *arr1){
	
	
		for(int i =0,j=n-1;i<n;i++){
				arr1[i]=arr[j];
				j--;
			}
	}
