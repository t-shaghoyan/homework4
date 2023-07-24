# include <stdio.h>
int main(){
	int lines=0;
		
		printf("please enter the number of lines to make square ");
		scanf(" %d",&lines);

		for(int i =0;i<lines;i++){
	
				printf("  *");
				
				for(int j=1;j<lines;j++){
					
					if(i==0||i==(lines-1)||j==lines-1){
						printf("  *");
					}
						else{
								printf("  -");	
								}
				
						}
					printf("\n");
	
			}
		printf("\n");

}
