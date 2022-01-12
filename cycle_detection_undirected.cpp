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
		
		bool dfsHelper(int node,vector<bool>&visited,int parent){
			visited[node]=true;
			for(int nbr:l[node]){
				if(!visited[nbr]){
					bool CycleFound= dfsHelper(nbr,visited,node);
					if(CycleFound)	return true;
				}
				//nbr is visited and is not parent of current node 
				
				else if(nbr!=parent)	return true;
				}
				return false;
				
			}
		bool contains_cycle(){
			vector<bool>visited (V,false);
			return dfsHelper(0,visited,-1);
		}

		
			

};


int main(){
	
	Graph g(3);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	// g.addEdge(2,0);
	cout<<g.contains_cycle()<<endl;

	return 0;
}