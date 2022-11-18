    
// Add digits repetedly until digit-sum becomes single digit

    int addDigits(int num) 
    {
      int ans=num;
      while(ans>9)
      {
        ans=0;
        while(num>0) 
        {
            ans+=num%10;
            num/=10;
        }
        num=ans;
      }
      return ans;  
    }