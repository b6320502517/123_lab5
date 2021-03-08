#include<stdio.h>
int main(){
	int n,m,i,j,l=0,k,h;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[m][m]={},b[n][n]={},c[20]={};
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n-(m-1);i++){
		for(j=0;j<n-(m-1);j++){
			/*if((j+1)%m==0){
				c[l]+=a[i][j];
				if((i+1)%m==2&&(j+1)%m==0){
					c[l]+=a[i][j];
					l++;
					
				}	
			}
			else{
				c[l]+=a[i][j];
			}
		}
		printf("%d\n",c[l]);*/
		printf("%d ",a[i][j]);
	}
	/*k=c[0];
	for(i=0;i<l;i++){
		if(k<c[i]){
			k=c[i];
			h=i;
		}
	}
	printf("%d",c[h+1]);*/
}
	return 0;
}
