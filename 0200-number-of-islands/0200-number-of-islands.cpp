class Solution {
public:
    void island(int i,int j,vector<vector<char>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'){
            return;
            }
        grid[i][j]='0';
        island(i-1,j,grid);
        island(i,j+1,grid);
        island(i+1,j,grid);
        island(i,j-1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)return 0;
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    island(i,j,grid);
                    count ++;
                }
            }
        }
        return count;
    }
};