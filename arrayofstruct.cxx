#include <stdio.h>
typedef struct BookInfo{
	char name[100];
	int pages;
	int price;
}bkin;
int main(int argc, char *argv[])
{
	bkin bk[3];
	
	for(int i=0; i<3; i++){
		printf("\n\n---Enter the details of book%d---\n",i+1);
		printf("Enter name of Book%d: ",i+1);
		//scanf("%s",&bk[i].name);
		gets(bk[i].name);
		//scanf("%[^\n]",&bk[i].name);
		//fgets(bk[i].name,sizeof(bk[i].name),stdin);
		printf("Enter the pages of Book%d: ",i+1);
		scanf("%d",&bk[i].pages);
		printf("Enter the price of Book%d: ",i+1);
		scanf("%d",&bk[i].price);
	}
	
	printf("\n=====Your all Books and there Details=====\n");
	
	for(int i=0; i<3; i++){
		printf("\nBook%d: \n",i+1);
		//printf("Name: %s \n",bk[i].name);
		puts(bk[i].name);
		printf("Pages: %d \n",bk[i].pages);
		printf("Prince: %d \n",bk[i].price);
	}
	return 0;
}