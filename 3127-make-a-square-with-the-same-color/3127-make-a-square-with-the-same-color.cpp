class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int  blackCount = 0,whiteCount = 0;
          
        for(int i = 0; i <= 1; ++i){
            for(int j = 0; j <= 1; ++j){
                if(grid[i][j] == 'B') blackCount++;
                else whiteCount++;
                
                 if(grid[i+1][j] == 'B') blackCount++;
                else whiteCount++;
                
                if(grid[i][j+1] == 'B') blackCount++;
                else whiteCount++;
                
                if(grid[i+1][j+1] == 'B') blackCount++;
                else whiteCount++;
                
                if(blackCount == 4 || whiteCount == 4 || (blackCount == 3 && whiteCount == 1) || (blackCount == 1                      && whiteCount==3)){
                   return true; 
                }
                   blackCount=0;
                   whiteCount=0;
            }
        }
                   return false;
    }
};