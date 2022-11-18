//Count Negatives in Sorted matrix


//O(N^2) Approach :-

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for (int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if (grid[i][j]<0)ans++;
            }
        }
        return ans;
    }
};



//O(NlogN) Approach :-

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for (int i=0; i<grid.size(); i++){
            ans+= upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
        }
        return ans;
    }
};