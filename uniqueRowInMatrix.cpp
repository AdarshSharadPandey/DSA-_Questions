//UNIQUE ROW


vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    //Your code here
    set<vector<int>>  s;
    vector<vector<int>> ans;
    for(int i=0;i<row;i++)
    {
        vector<int> v;
        for(int j=0;j<col;j++)
        {
            v.push_back(M[i][j]);
        }
        if(s.find(v)==s.end())
        {
            s.insert(v);
            ans.push_back(v);
        }
    }
    return ans;
}