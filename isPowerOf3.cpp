// Is power of 3?


    bool isPowerOfThree(int n) 
    {
        if(n<1) return false;
        while(n%3==0&& n>1)
            n/=3;
        return n==1;
    }