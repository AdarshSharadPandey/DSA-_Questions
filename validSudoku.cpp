    int isValid(vector<vector<int>> mat){
        // code here
        map<int,int> row[9];
        map<int,int> col[9];
        map<int,int> block[9];
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                int k=i/3*3+j/3;
                if(mat[i][j]!=0)
                {
                    if(row[i][mat[i][j]]++ > 0) return 0;
                    if(col[j][mat[i][j]]++ > 0) return 0;
                    if(block[k][mat[i][j]]++ > 0) return 0;
                }
            }
        return 1;
    }