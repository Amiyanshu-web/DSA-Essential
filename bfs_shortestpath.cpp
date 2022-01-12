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
		void addEdge(int i,int j,bool undir=true){
			l[i].push_back(j);
			if(undir){
				l[j].push_back(i);
			}
		}
		

		
		void bfsShortest(int source,int dest){
			queue<int>q;
			bool *visited=new bool [V]{0};
			int  *dist=new int [V] {0};
			int  *parent=new int[V];
			for (int i = 0; i < V; ++i)
			{
				/* code */
				parent[i]=-1;
			}
			q.push(source);
			visited[source]=true;
			parent[source]=source;
			while(!q.empty()){
				int f=q.front();
				int currDist=dist[f];
				cout<<f<<"->"<<currDist<<endl;
				q.pop();

				for(auto nbr:l[f]){
					if(!visited[nbr]){
						q.push(nbr);
						visited[nbr]=true;
						dist[nbr]=currDist+1;
						parent[nbr]=f;
					}
				}
			}

			for(int i=0;i<V;i++){
				cout<<"shortest Distance ";
				cout<<i<<"-->"<<dist[i]<<endl;

			}
			//Print path frm source to destination
			if(dest!=-1){
				int temp=dest;
				while(temp!=source){
					cout<<temp<<"--";
					temp=parent[temp];
				}
				cout<<source<<endl ;
			}
			

		}


		
			

};


int main(){
	Graph g(7);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);
	// g.addEdge(4,6);
	g.addEdge(5,6);
	g.bfsShortest(1,6);
	
	

	return 0;
}