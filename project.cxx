#include <stdio.h>

int main(){
int a[10];
int b,ans=0,i;
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}

  for(i=0;i<b;i++){
    if((b%2)==0){
    	ans=(ans + a);
    }
  }
  printf("Answer is %d",ans);
  return 0;
}
