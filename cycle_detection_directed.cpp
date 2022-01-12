#include<iostream>
#include<queue>
#include<list>
#include<vector>
#include<set>
#include<climits>
using namespace std;

class Graph{
int V;
list<int> *l;

public:
		Graph(int v){
			V=v;
		l=new list<int>[v];
		}
		void addEdge(int i,int j){
			l[i].push_back(j);
				l[j].push_back(i);
		}
		bool dfsHelper(int node,vector<bool>&visited,vector<bool> &stack){
		//main logic here
			//true->backedge found
			// else false
			//arrive at node 
				stack[node]=true;
				visited[node]=true;
			//do some work
				for(int nbr:l[node]){
					 if(stack[nbr]==true){
					 	return true;
					 }
					 else if(visited[nbr]==false){
					 	bool nbrFoundACycle=dfsHelper(nbr,visited,stack);
					 	if(nbrFoundACycle)	return true;
					 }
				}


				//after work
				stack[node]=false;
				return false;
			}


		bool contains_cycle(){
			vector<bool>visited (V,false);
			vector<bool>stack (V,false);
			for (int i = 0; i < V; ++i)
			{
				/* code */
				if(!visited[i]){
					if(dfsHelper(i,visited,stack))	return true;
				}
			}
			return false;
		}

		
			

};


int main(){
	
	Graph g(3);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,2);
	// g.addEdge(2,0);
	cout<<g.contains_cycle()<<endl;

	return 0;
}