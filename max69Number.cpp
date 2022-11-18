    // Max Number with 6 and 9

    int maximum69Number (int num) 
    {
        int rev=0;
        while(num>0)
        {
            rev=rev*10 + num%10;
            num/=10;
        }
        int flag=1,mod;
        while(rev>0)
        {
            mod=rev%10;
            if(mod==6 && flag) mod=9,flag=0;
            num=num*10 + mod;
            rev/=10;
        }
        return num;
    }