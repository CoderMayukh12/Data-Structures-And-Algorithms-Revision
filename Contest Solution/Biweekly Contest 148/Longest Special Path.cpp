// class Solution {
// public:
//     int n;
//     vector<vector<pair<int,int>>> graph;
//     int maxPathLen, minCnt;
//     vector<int> arr;
//     map<int,int> prefSum, prefCnt, level;
//     map<int,vector<int>> prevIdx;

//     void dfs(int currNode,int parNode,int currL,int prevL,int currSum,int currCnt){
//         prefSum[currL-1] = currSum;
//         prefCnt[currL] = currCnt;
//         level[currNode] = currL;
//         int val = arr[currNode];

//         // prev same value exists
//         if(prevIdx[val].size()!=0){
//             int lenSum = currSum;
//             int t;
//             if(prevL!=-1){
//                 t = max(prevL,level[prevIdx[val].back()]);
//             }
//             else{
//                 t = level[prevIdx[val].back()];
//             }
//             lenSum -= prefSum[t];
//             prevL = max(prevL,level[prevIdx[val].back()]);

//             if(maxPathLen < lenSum){
//                 maxPathLen = lenSum;
//                 minCnt = currCnt - prefCnt[t];
//             }
//             else if(maxPathLen == lenSum){
//                 minCnt = min(minCnt, currCnt - prefCnt[t]);
//             }
//         }
//         else{ // No prev same value exists
//             int lenSum = currSum;
//             int t = -1;
//             if(prevL!=-1){
//                 lenSum -= prefSum[prevL];
//                 if(maxPathLen < lenSum){
//                     maxPathLen = lenSum;
//                     minCnt = currCnt - prefCnt[prevL];
//                 }
//                 else if(maxPathLen == lenSum){
//                     minCnt = min(minCnt, currCnt - prefCnt[prevL]);
//                 }
//             }
//             else{
//                 if(maxPathLen < lenSum){
//                     maxPathLen = lenSum;
//                     minCnt = currCnt;
//                 }
//                 else if(maxPathLen == lenSum){
//                     minCnt = min(minCnt, currCnt);
//                 }
//             }
//         }

//         prevIdx[val].push_back(currNode);
//         for(auto &[child,wt] : graph[currNode]){
//             if(child!=parNode){
//                 dfs(child,currNode,currL+1,prevL,currSum + wt,currCnt + 1);
//             }
//         }
//         prevIdx[val].pop_back();
//     }

//     vector<int> longestSpecialPath(vector<vector<int>>& edges, vector<int>& nums) {
//         n = nums.size();
//         graph.assign(n,vector<pair<int,int>>());
//         arr = nums;
//         prevIdx.clear();
//         prefSum.clear();
//         prefCnt.clear();
//         level.clear();

//         for(auto &x : edges){
//             int u = x[0], v = x[1], len = x[2];
//             graph[v].push_back({u,len});
//             graph[u].push_back({v,len});
//         }

//         maxPathLen = 0, minCnt = 1e9;
//         dfs(0,-1,0,-1,0,1); // dfs(int currNode,int parNode,int currL,int prevL,int currSum,int currCnt)

//         return {maxPathLen,minCnt};
//     }
// };