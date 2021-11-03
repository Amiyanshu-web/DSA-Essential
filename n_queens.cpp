#include <bits/stdc++.h>
using namespace std;

#define n 4



bool isSafe(int board[n][n],int row,int col){

    int i, j;
  	
    /* Check this row on left side */
    for (i = 0; i < row; i++)
        if (board[i][col]==1)
            return false;
        // if(board[row-1][i]==1)	return false;
  
    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]==1)
            return false;
  
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j]==1)
            return false;
  
    return true;

}
bool nqueens(int board[n][n],int row){
	if(row==n)	return true;

	for (int col = 0; col < n; ++col)
	{
		if(isSafe(board,row,col)){
			board[row][col]=1;
			if(nqueens(board,row+1))	return true;

			board[row][col]=0;
		}

	}
	return false;
}


int main(){
	int board[n][n]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	if(nqueens(board,0)){
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}