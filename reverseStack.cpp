    stack<int> rev(stack<int> St)
    {
        stack<int> s;
        while(!St.empty())
        {
            s.push(St.top());
            St.pop();
        }
        return s;
    }
    void Reverse(stack<int> &St)
    {
        St=rev(St);
    }