    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        int arr[R*C];
        int k=0;
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                arr[k]=matrix[i][j],k++;
        sort(arr, arr+R*C);
        return arr[(R*C/2)];
    }