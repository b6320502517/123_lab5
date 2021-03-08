#include<stdio.h>
int main(){
	int n,m,i,j,l=0,k,h,w;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[m][m]={},b[n][n]={},c[20]={};
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	w=n-(m-1);
	i=0,j=0;
	while(1){
		for(;i<w;i++){
			for(;j<w;j++){
				c[l]+=a[i][j];
			printf("%d ",a[i][j]);
		}
		}
		w++;
		l++;
		i++,j++;
		if(i*j==n*n)
			break;
	}
	
	/*k=c[0];
	for(i=0;i<l;i++){
		if(k<c[i]){
			k=c[i];
			h=i;
		}
	}
	printf("%d",c[h+1]);*/

	return 0;
}
