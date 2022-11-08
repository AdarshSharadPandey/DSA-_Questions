/***** COUNT DIGITS  ******/




// Approach-1 ( TC=O(n), SC=O(1) ): 
/*****   Keep on dividing the number by 10 till n becomes 0, everytime count++    *****/


int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}




// Approach-2 ( TC=O(1), SC=O(1) ): 
/*****   Convert to string and return the size    *****/


int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}




// Approach-3 ( TC=O(1), SC=O(1) ): 
/*****   return the log base 10 of number    *****/


int count_digits( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}