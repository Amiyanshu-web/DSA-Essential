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
		void printAdjList(){
			for(int i=0;i<V;i++){
				cout<<i<<"->";
				//eveery elemtn of ith linekdf list
				for(auto node:l[i]){
					cout<<node<<",";
				}
				cout<<endl;
			}

		}
		void bfs(int source){
			queue<int>q;
			bool *visited=new bool [V]{0};

			q.push(source);
			visited[source]=true;
			while(!q.empty()){
				int f=q.front();
				cout<<f<<endl;
				q.pop();

				for(auto nbr:l[f]){
					if(!visited[nbr]){
						q.push(nbr);
						visited[nbr]=true;
					}
				}
			}

		}
		void dfsHelper(int node,bool* visited){
			visited[node]=true;
			cout<<node<<endl;
			for(int nbr:l[node]){
				if(!visited[nbr]){
					dfsHelper(nbr,visited);
				}
				}
				
			}
		void dfs(int source){
			bool *visited=new bool[V] {0};
			dfsHelper(source,visited);
		}

		void topologicalSort(){
			vector<int>indegree(V,0);
			//give indegree to each elemnt
			for(int i=0;i<V;i++){
				for(auto nbr:l[i]){
					indegree[nbr]++;
				}

			}
			//bfs 
			queue<int>q;
			//init queue with nodes having 0 indegree
			for(int i=0;i<V;i++){
				if(indegree[i]==0)	q.push(i);
			}
			while(!q.empty()){
				int node=q.front();
				cout<<node<<" ";
				q.pop();
				for(auto nbr:l[node]){
					indegree[nbr]--;
					if(indegree[nbr]==0){
						q.push(nbr);
					}
				}
			}
			}

			int dijkshtra(int src,int dest){
				vector<int>dist(V,INT_MAX);
				set<pair<int,int>>s;


				// 1.INIT
				dist[src]=0;
				s.insert({0,src});

				while(!s.empty()){
					auto it=s.begin();
					 int distTillNow=it->first;
					 int node=it->second;

					 //pop
					 s.erase(it);

					for(auto nbrPair:l[node]){
						int currEdge=nbrPair.first;
						int nbr=nbrPair.second;



						if(distTillNow+currEdge<dist[nbr]){

							//erase if exisitng
							auto f=s.find({dist[nbr],nbr});
						if(f!=s.end()){
							s.erase(f);
						}
						//insert updated
							dist[nbr]=distTillNow+currEdge;
							s.insert({dist[nbr],nbr});
						}
					 }

				}
				//single source shortest distance
				for(int i=0;i<V;i++){
					cout<<"NOde i :"<<i<<"Distance: "<<dist[i]<<endl;

				}
				return dist[dest];
			}
			

};


int main(){
	// Graph g(7);
	// g.addEdge(0,1);
	// g.addEdge(0,4);
	// g.addEdge(2,1);
	// g.addEdge(3,4);
	// g.addEdge(4,5);
	// g.addEdge(2,3);
	// g.addEdge(3,5);
	// g.printAdjList();
	// g.dfs(1);
	// Graph g(6);
	// g.addEdge(0,2);
	// g.addEdge(2,3);
	// g.addEdge(3,5);
	// g.addEdge(4,5);
	// g.addEdge(1,4);
	// g.addEdge(1,2);
	// g.topologicalSort();
	Graph g(5);
	g.addEdge(0,1,1);
	g.addEdge(1,2,1);
	g.addEdge(0,2,4);
	g.addEdge(0,3,7);
	g.addEdge(3,2,2);
	g.addEdge(3,4,3);
	cout<<g.dijkshtra(0,4)<<endl;

	return 0;
}