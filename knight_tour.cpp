#include <bits/stdc++.h>
using namespace std;

#define n 8

bool isvalid(int nx,int ny){
	if(nx<0 or nx>n or ny<0 or ny>n) return false;

	return true;
}


bool go(int mat[n][n],int x,int y,int mv,int dx[n],int dy[n]){
	if(mv==n*n)	return 1;
	for(int i=0;i<n;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(isvalid(nx,ny) and mat[nx][ny]==-1){
			mat[nx][ny]=mv;
			if(go(mat,nx,ny,mv+1,dx,dy)){
				return true;
			}

		}
		mat[nx][ny]=-1;//backtracking
	}
	return false;
}
int main(){
	int mat[8][8];
	memset(mat,-1,sizeof(mat));
	mat[0][0]=0;
	int dx[8]={1,1,-1,-1,2,2,-2,-2};
	int dy[8]={2,-2,2,-2,1,-1,1,-1};
	if(go(mat,0,0,1,dx,dy)){
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
					cout<<mat[n][n]<<'\t';				
			}
			
		}
	}
}