class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int x=g.size();
        int y=s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        int cnt=0;
        
        for(int i=0;i<y and j<x;i++){
            if(s[i]>=g[j]){
                cnt++;
                j++;
            }
        }
        return cnt;
    }
};