#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<vector<int>>&adj, vector<bool> &visited, int s)
{
 queue<int>q;
 visited[s] = true;
 q.push(s);
 while(!q.empty()){
 int node = q.front();
 q.pop();
 cout<<node<<" ";
 for(int n : adj[node])
 {
 if(visited[n] == false)
 {
 visited[n] = true;
 q.push(n);
 }
 }
 }
}
void dis_bfs(vector<vector<int>>&adj, int v, int s){
 vector<bool> visited (v, false);
 cout << "BFS starting from: " << s << "\n";
 bfs(adj, visited, s);
 for(int i =0; i<v; i++)
 {
 if(visited[i] == false)
 {
 bfs(adj,visited,i);
 }
 }
}
void addEdge(vector<vector<int>>&adj, int s, int t){
 adj[s].push_back(t);
 adj[t].push_back(s);
}
int main()
{
 int v = 6;
 vector<vector<int>>adj(v);
 vector<vector<int>>edges = {{1,5},{1,4},{1,2},{2,3},{3,4}};
 for(auto &e : edges){
 addEdge(adj, e[0], e[1]);
 }
 int s = 1;
 dis_bfs(adj,v, s);
}
/*BFS starting from: 1
1 5 4 2 3 0
*/
