#include<stdio.h>
int main(){
	unsigned int n,i,j,k=0,l=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		if((l%2==0||l%3==0||l%5==0||l==1)&&l%7!=0){
			k++;

		}
		else{
			i--;
			k++;

		}
		l++;
			
	}
	printf("%d",k);
	return 0;
}
