#include<stdio.h>
int main(){
	int n,i,j,k,l=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if((l%2==0||l%3==0||l%5==0||l%7==0||l==1||l==2||l==5)&&(l!=7)){
			l++;
		}
		else{
			i--;
			l++;
		}
			
	}
	printf("%d",l);
	return 0;
}
