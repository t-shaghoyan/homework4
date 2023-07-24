# include<stdio.h>

void printElements(int n);

int main(){
	
int lenghtOfArr = 0;
	
			printf("please enter the lenght of array ");
			scanf(" %d",&lenghtOfArr);	
			
			printElements(lenghtOfArr);

}

	void printElements(int n){
		
		int arr[n];
			for(int i =0;i<n;i++){
				printf("please enter the %d value of array ",i+1);
				scanf("%d",&arr[i]);
			}
	
			for(int i = 0; i<n;i++){
				printf("the %d element is %d\n",i+1,arr[i]);
				}

		}
