    //Function to return a list of integers denoting spiral traversal of matrix.



    
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
        int sr=0,sc=0,er=r-1,ec=c-1;
        vector<int> v;
        while((sr<=er)||(sc<=ec))
        {
            for(int i=sc;i<=ec && v.size()<r*c;i++)
               v.push_back(mat[sr][i]);
            sr++;
            for(int i=sr;i<=er && v.size()<r*c;i++)
               v.push_back(mat[i][ec]);
            ec--;
            for(int i=ec;i>=sc && v.size()<r*c;i--)
               v.push_back(mat[er][i]);
            er--;
            for(int i=er;i>=sr && v.size()<r*c ;i--)
               v.push_back(mat[i][sc]);
            sc++;
        }
        return v;
    }