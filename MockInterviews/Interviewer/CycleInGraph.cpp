//Date: 4/19/2020

#include <vector>
#include <iostream>
using namespace std;
bool cycleInGraph(vector<vector<int>> edges) 
{
 queue<pair<int,int>> q;
 set<int> visited;
 
 cout << "hello" << endl;
 
 q.push({0, edges[0][1]});
 visited.insert(edges[0][1]); 
 while (!q.empty())
 {
 pair<int,int> node = q.front();
 q.pop();
 
 vector<int> neighbors = edges[node.first];
 for (int neighbor : neighbors)
 {
 if (!visited.count(neighbor))
 {
 q.push({node.first, neighbor});
 node.first += 1;
 if (node.first >= edges.size()-1)
 {
 break;
 }
 else
 {
 return true; 
 }
 }
 }
 }
return false;
}
