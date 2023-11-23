#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int arr[51][51]={0};
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int n;
	scanf("%d",&n);
	for(int a=0;a<=n;a++){
		char d[10];
		fgets(d,sizeof(d),stdin);

		if(d[0]=='S'&&d[1]=='R'){
			for(int i=0;i<c;i++){
				int h1=int (d[3]-'0');
				int h2=int (d[5]-'0');
		 
				int x=arr[h1-1][i];
				arr[h1-1][i]=arr[h2-1][i];
				arr[h2-1][i]=x;
			}
		}							//define sr
	
		if(d[0]=='S'&&d[1]=='C'){
			for(int i=0;i<r;i++){
				int l1=int (d[3]-'0');
				int l2=int (d[5]-'0');
				int x=arr[i][l1-1];
				arr[i][l1-1]=arr[i][l2-1];
				arr[i][l2-1]=x;
			}
		}							//define sc
	
		if(d[0]=='D'&&d[1]=='R'){
			int h=int (d[3]-'0');
			for(int i=h;i<r;i++){
				for(int j=0;j<c;j++){
					arr[i-1][j]=arr[i][j];
				}	
			}
			r--;
		}							//define dr(w)
		
		if(d[0]=='D'&&d[1]=='C'){
			int l=int (d[3]-'0');
			for(int i=l;i<c;i++){
				for(int j=0;j<r;j++){
					arr[j][i-1]=arr[j][i];
				}
			}
			c--;			//define dc(w) 
			
		}
		
		if(d[0]=='I'&&d[1]=='R'){
			int x=int (d[3]-'0'); 
			for(int i=r;i>=x;i--){
				for(int j=0;j<c;j++){
					arr[i][j]=arr[i-1][j];
				}
			}
			for(int k=0;k<c;k++){
				arr[x-1][k]=0;
			}
			r++;
		}				//define ir
		
		if(d[0]=='I'&&d[1]=='C'){
			int y=int (d[3]-'0');
			for(int i=c;i>=y;i--){
				for(int j=0;j<r;j++){
					arr[j][i]=arr[j][i-1];
				}
			}
			for(int k=0;k<r;k++){
				arr[k][y-1]=0;	
			}
			c++;
		}				//define ic
		
	
		
		
	}
	
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;	
}