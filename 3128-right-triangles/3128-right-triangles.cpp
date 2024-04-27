class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long numT = 0;
        int R = grid.size();
        int C = grid[0].size();
        
        vector<int>Rsum(R,0);
        vector<int>Csum(C,0);
        // R or C count karne  ke liye
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                Rsum[i] += grid[i][j];
                Csum[j] += grid[i][j];
            }
        }
        //rT count karne ke liye 
        for(int i = 0; i < R; i++){
            for(int j = 0 ; j< C; j++){
                if(grid[i][j] == 1){
                    numT += (Rsum[i] - 1 ) * (Csum[j] - 1);
                }
            }
        }
        return numT;
    }
};