// link: https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int, pair<int, int>> > maxh;
        for(int i=0;i<points.size(); i++){
            maxh.push(make_pair((points[i][0]*points[i][0]+points[i][1]*points[i][1]), make_pair(points[i][0], points[i][1])));
            if(maxh.size()>k){
                maxh.pop();
            }
            
        }
        vector<vector<int>> v;
        while(maxh.size()>0){
            vector<int> v1;
            pair<int, int> p=maxh.top().second;
            int p1=p.first;
            int p2=p.second;
            v1.push_back(p1);
            v1.push_back(p2);
            v.push_back(v1);
            maxh.pop();
        }
        return v;
    }
};