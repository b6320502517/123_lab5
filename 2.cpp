#include<stdio.h>
int main(){
	int i,j,k=0,l,n=1;
	if(n<=1000&&n>=1)
		scanf("%d",&n);
  if(n%2==0){
  	n--;
  	k++;
  	l=((n+k)/2)-1;
  }
  else{
  	l=((n+k)/2);
  	
  }
	for(i=0;i<(n+k)/2;i++){
		for(j=0;j<n;j++){
			if(j==(n/2)-i||j==(n/2)+i)
				printf("*");
			else
				printf("_");
		}
		printf("\n");
	}
	return 0;
}
