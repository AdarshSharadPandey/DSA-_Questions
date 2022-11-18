   /* FIZZ-BUZZ 
   (From 1 to n, fizz if divisible by 3 only, buzz if divisible by 5 only, 
   fizzbuzz if divisible by both 3 and 5, else same number in string format) */



    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
                ans.push_back("FizzBuzz");
            else if(i%3==0)
                ans.push_back("Fizz");
            else if(i%5==0)
                ans.push_back("Buzz");
            else
            {
                string s="";
                int temp=i;
                while(temp>0)
                {
                    
                    s+=(char)(48+(temp%10));
                    temp/=10;
                }
                reverse(s.begin(),s.end());
                ans.push_back(s);
            }
        }
        return ans;
    }