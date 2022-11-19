    // TO LOWER CASE

    string toLowerCase(string s) 
    {
        string ans="";
        for(int i=0;i<s.size();i++)
            ans+=tolower(s[i]);
        return ans;
    }