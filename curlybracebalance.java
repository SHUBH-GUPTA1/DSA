                                   //Count the Reversals


//Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
//A reversal means changing '{' to '}' or vice-versa.

//S = "}{{}}{{{"
// Output: 3
// Explanation: One way to balance is:
// "{{{}}{}}". There is no balanced sequence
// that can be formed in lesser reversals.

//S = "{{}{{{}{{}}{{"
// Output: -1
// Explanation: There's no way we can balance
// this sequence of braces.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).




int countRev (String s)
    {
        // your code here  
        int open=0;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='{')open++;
            else{
                if(open>0)open--;
                else{
                    open++;
                    ans++;
                }
            }
        }
        if(open%2!=0)return -1;
        return ans+open/2;
    }