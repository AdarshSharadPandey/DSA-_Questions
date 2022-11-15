int setBits(int N) {
        // Write Your Code here
        int count=0,temp=1;
        while(temp<=N)
        {
            if((temp&N)>0) count++;
            temp=temp<<1;
        }
        return count;
    }