        //All Permutations of String

        vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=1;
		    vector<string> ans;
		    set<string> s;
		    for(int i=2;i<=S.size();i++)   n*=i;
		    for(int i=1;i<=n;i++)
		    {
		        if(s.find(S)==s.end())
		        { ans.push_back(S); s.insert(S);}
		        else break;
		        next_permutation(S.begin(),S.end());
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}