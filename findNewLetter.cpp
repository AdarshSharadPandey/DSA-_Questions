    // Find the difference


    char findTheDifference(string s, string t) 
    {
        map<char,int> mp,mp2;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0;i<t.size();i++)
            mp2[t[i]]++;
        for(int i=0;i<t.size();i++)
            if(mp2[t[i]]!=mp[t[i]]) return t[i];
        return t[0];
    }