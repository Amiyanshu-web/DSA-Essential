#include<iostream>
#include<queue>
#include<list>
#include<vector>
#include<set>
#include<climits>
using namespace std;

class Graph{
int V;
list<pair<int,int>> *l;

public:
		Graph(int v){
			V=v;
		}
		void addEdge(int i,int j,int wt,bool undir=true){
			l[i].push_back({wt,j});
			if(undir){
				l[j].push_back({wt,i});
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
	
	Graph g(6);
	g.addEdge(0,1,1);
	g.addEdge(1,2,1);
	g.addEdge(0,2,4);
	g.addEdge(0,3,7);
	g.addEdge(3,2,2);
	g.addEdge(3,4,3);
	cout<<g.dijkshtra(0,4)<<endl;

	return 0;
}