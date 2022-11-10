vector<int> factorial(int N)
    {
        vector<int> ans;  //For storing factorial
        
        //Initially we have 1 as we will multiply it in every number's factorial
        ans.push_back(1); 
        
        //Now we need to multiply numbers from 2 to n one by one and store the result in reverse order in a vector
        
        for(int i = 2; i <= N; i++)
        {
            
            /*MULTIPLICATION LOGIC:
            Just like we generally perform muiltiplication we multiply with the number, write last digit 
            and send the remaining number as a carry to next element and do the same for that digit,
            multiply he digit by number, add the carry,store last digit as the element and send the remaining digits
            as carry. We repeat it till we have multiplied all digits and we have stored the projects
            in vector. After that we will store the carry remaining. Same as we do in normal multiplication. */
            
            
            int carry = 0;
            for(int j = 0; j < ans.size(); j++)
            {
                // for getting the product of current digit with number and adding carry into it
                int curr = ans[j]*i + carry;  
                //storing last digit as element
                ans[j] = curr % 10;
                //forwarding remaining number as carry
                carry = curr / 10;
            }
            //At last after all digits are multiplied, we put the remaining carry.
            while(carry != 0)
            {
                ans.push_back(carry%10);
                carry /= 10;
            }
        }
        //Finally we reverse the vector so that we can get our number correctly.
        reverse(ans.begin(), ans.end());
        //Returning the factorial.
        return ans;
    }