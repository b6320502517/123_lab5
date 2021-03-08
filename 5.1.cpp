#include<stdio.h>
int main(){
	int n,m,i,j,l=0,k,h,w,i1,j1,l1=0,w1;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][n]={}; int c[20]={};
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	w=m,w1=m;
	i1=0,j1=0;
	while(1){
		for(i=i1;i<w1;i++){
			for(j=j1;j<w;j++){
				c[l]+=a[i][j];
			printf("%d ",a[i][j]);
			}
			l1++;
		}
		w++,l++,j1++;
		if(l1%m==0){
			i1++;
			w=m;
			w1++;
			j1=0;
			
		}
		if((i+1)*(j+1)==n*n)
			break;

	}
	
	
	
	/*k=c[0];
	for(i=0;i<l;i++){
		if(k<c[i]){
			k=c[i];
			h=i;
		}
	}
	printf("%d",c[h]);*/

	return 0;
}
