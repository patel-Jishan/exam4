/*       5
     4 5 4
   3 4 5 4 3
 3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1*/

	
#include <stdio.h>
int main(){
	int i,j,k,p;
	int num=4;
	for(i=5;i>=1;i--){
		for(k=5;k>5-i;k--){
			printf(" ");
		}
		for(j=i;j<=5;j++){
		printf("%d",j);	
		
		}
		for(p=i;p<5;p++){
			printf("%d",num--);
		}
		printf("\n");
		num=4;
	}
	
}

	
	

