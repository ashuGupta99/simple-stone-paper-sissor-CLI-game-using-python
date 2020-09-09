#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int* ptr;
	int n;
	printf("Enter the size of Dynamic array or  dynamic memory block\n");
	scanf("%d",&n);
	ptr = (int*) malloc(n * sizeof(int));
	//ptr = (int*) cealloc(n , sizeof(int));
	for(int i=0; i<n; i++){
		printf("Enter ptr[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
	
	printf("Your dynamically Allocayed array or memory");
	for(int i=0; i<n; i++){
		printf("\nptr[%d] : %d",i,ptr[i]);
	}
	
		printf("\nEnter the size of New Dynamic array or  dynamic memory block\n");
	scanf("%d",&n);
	ptr = (int*) realloc(ptr,n * sizeof(int));
	
	for(int i=0; i<n; i++){
		printf("Enter ptr[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour New dynamically Allocayed array or memory");
	for(int i=0; i<n; i++){
		printf("\nptr[%d] : %d",i,ptr[i]);
	}
	free(ptr);
	return 0;
}