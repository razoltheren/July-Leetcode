class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int side=0;
        int ones=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    ones++;
                    if(j+1<grid[0].size() && grid[i][j+1]==1)
                       side++;
                    if(i+1 < grid.size() && grid[i+1][j]==1)
                        side++;
                }
            }
        }
        return ones*4 - (side)*2;
    }
};