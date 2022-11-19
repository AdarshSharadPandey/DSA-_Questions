    //Jewels and Stone (how many jewels are there in stones)

    int numJewelsInStones(string jewels, string stones) 
    {
        set<char> s;
        int count=0;
        for(int i=0;i<jewels.size();i++)
            s.insert(jewels[i]);
        for(int i=0;i<stones.size();i++)
            if(s.find(stones[i])!=s.end()) count++;
        return count;
    }