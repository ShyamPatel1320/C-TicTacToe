#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,t=9,a[4][4],n,d,b[10];
	for(i=0;i<=3;i++){
		
		for(j=0;j<=3;j++){
			a[i][j]=-1;
		}
	}
	while(t>0){
		d=0;
		printf("\nenter your location=");
		scanf("%d",&n);
		b[t]=n;
		for(i=9;i>t;i--){
			if(b[i]==n){
			d=1;
				printf("location alredy occupied\n");
				break;
			}
		}
		if(n==1&&d==0){
			if(t%2==0){
				a[1][1]=0;
			}
			else{
				a[1][1]=1;
			}t--;
		}
		else if(n==2&&d==0){
		if(t%2==0){
			a[1][2]=0;
			}
		else{
			a[1][2]=1;
			}t--;
		}
			else if(n==3&&d==0){
		if(t%2==0){
			a[1][3]=0;
			}
		else{
			a[1][3]=1;
			}t--;
		}
			else if(n==4&&d==0){
		if(t%2==0){
			a[2][1]=0;
			}
		else{
			a[2][1]=1;
			}t--;
		}
			else if(n==5&&d==0){
		if(t%2==0){
			a[2][2]=0;
			}
		else{
			a[2][2]=1;
			}t--;
		}
			else if(n==6&&d==0){
		if(t%2==0){
			a[2][3]=0;
			}
		else{
			a[2][3]=1;
			}t--;
		}
			else if(n==7&&d==0){
		if(t%2==0){
			a[3][1]=0;
			}
		else{
			a[3][1]=1;
			}t--;
		}
			else if(n==8&&d==0){
		if(t%2==0){
			a[3][2]=0;
			}
		else{
			a[3][2]=1;
			}
			t--;
		}
			else if(n==9&&d==0){
		if(t%2==0){
			a[3][3]=0;
			}
		else{
			a[3][3]=1;
			}
			t--;
		}
		else if(d==0){
			printf("invalid choice\n");
		}
		printf(" _ _ _\n");
		printf("|");
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
				if(a[i][j]==1){
					printf("X|");
				}
				else if(a[i][j]==0){
					printf("O|");
				}
				else if(a[i][j]==-1){
					printf("_|");
				}
			}
			printf("\n");
			if(i!=3){
				printf("|");
			}
			if(i==3){
				printf("\n");
			}
		}
			if((a[1][1]==1 && a[1][2]==1 && a[1][3]==1) || (a[2][1]==1 && a[2][2]==1 && a[2][3]==1) || (a[3][1]==1 && a[3][2]==1 && a[3][3]==1) || (a[1][1]==1 && a[2][1]==1 && a[3][1]==1) || (a[1][2]==1 && a[2][2]==1 && a[3][2]==1) || (a[1][3]==1 && a[2][3]==1 && a[3][3]==1) || (a[1][1]==1 && a[2][2]==1 && a[3][3]==1) || (a[1][3]==1 && a[2][2]==1 && a[3][1]==1))	
		{
			printf("Player with X is winner\n");
			break;
		}
		else if((a[1][1]==0 && a[1][2]==0 && a[1][3]==0) || (a[2][1]==0 && a[2][2]==0 && a[2][3]==0) || (a[3][1]==0 && a[3][2]==0 && a[3][3]==0) || (a[1][1]==0 && a[2][1]==0 && a[3][1]==0) || (a[1][2]==0 && a[2][2]==0 && a[3][2]==0) || (a[1][3]==0 && a[2][3]==0 && a[3][3]==0) || (a[1][1]==0 && a[2][2]==0 && a[3][3]==0) || (a[1][3]==0 && a[2][2]==0 && a[3][1]==0))
		{
			printf("Player with O is winner\n");
			break;
		}
		else if(t==0)
		{
			printf("Match has ended as a draw\n");
		}
	}
}
