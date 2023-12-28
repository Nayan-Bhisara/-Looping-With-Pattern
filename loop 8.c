#include<stdio.h>

main(){
	
	int i,j,k=1;
	int num = 1;
	char a = 'A';
	
for(i=1;i<=5;i++){
	
	for(j=1;j<=5;j++){
		(i%2==0)?printf("%c ",a++)
		        :printf("%d ",num++);
	}
	printf("\n");
}

	
}
