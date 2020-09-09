#include<stdio.h>
#include<stdio.h>
int main(){
	clrscr();
	int c,r,i,j;
	int a[10][10],b[10][10],add[10][10];
	
	printf("Enter the rows length of matrix: ");
	scanf("%d",&c);
	printf("Enter the columns length of matrix: ");
	scanf("%d",&r);
	
	printf("\nEnter the values of matrix A: \n");
    for(i=0; i<c; i++){
    	for(j=0; j<r; j++){
    		scanf("%d",&a[i][j]);
    	}
    	printf("\n");
    }
    
	printf("\nEnter the values of matrix B: \n");
    for(i=0; i<c; i++){
    	for(j=0; j<r; j++){
    		scanf("%d",&b[i][j]);
    	}
    	printf("\n");
    }

    printf("\nMatrix A: \n");
    for(i=0; i<c; i++){
    	for(j=0; j<r; j++){
    		printf("%d  ",a[i][j]);
    	}
    	printf("\n");
    }
    
    printf("\nMatrix B: \n");
    for(i=0; i<c; i++){
    	for(j=0; j<r; j++){
    		printf("%d  ",b[i][j]);
    	}
    	printf("\n");
    }
    
    
    for(i=0; i<c; i++){
    	for(j=0; i<r; j++){
    		add[i][j] = a[i][j] + b[i][j];
    	}
    }
    
    printf("\nAddition of matrix A and B : \n");
    for(i=0; i<c; i++){
    	for(j=0; j<r; j++){
    		printf("%d  ",add[i][j]);
    	}
    	printf("\n");
    }
    getch();
}