#include<bits/stdc++.h>
using namespace std;

#define n 4


void printSolution(int sol[n][n]){
	for (int i = 0; i < n; ++i)

	{
		for (int j = 0; j < n; ++j)
		{
			cout<<sol[i][j]<<" ";

		}
		cout<<endl;
	}
}

 

bool isSafe(int x,int y,int maze[n][n]){
	if(x>=0 && x<n &&y>=0 &&y<n &&maze[x][y]==1)	return true;
	return false;
}



bool solveMazeUtil(int maze[n][n],int x,int y,int sol[n][n]){
	if(x==n-1 && y==n-1 &&maze[x][y]==1){
		sol[x][y]=1;
		return true;

	}	
	if(isSafe(x,y,maze)){
		if(sol[x][y]==1) return false;
		sol[x][y]=1;

		if(solveMazeUtil(maze,x+1,y,sol))	return true;
		if(solveMazeUtil(maze,x,y+1,sol))	return true;

		sol[x][y]=0;

		return false;
	}
	return false;

	}




bool solve_maze(int maze[n][n]){
	int sol[n][n] = { { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 } };
 
    if (solveMazeUtil(
            maze, 0, 0, sol)
        == false) {
        printf("Solution doesn't exist");
        return false;
    }
 
    printSolution(sol);
    return true; 

}

int main(){
	int maze[n][n] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 } };

    
    solve_maze(maze);
}