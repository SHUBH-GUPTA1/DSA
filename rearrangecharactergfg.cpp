// Rearrange characters
// Given a string S with repeated characters. The task is to rearrange characters in a string such that no two adjacent characters are the same.
// Note: The string has only lowercase English alphabets and it can have multiple solutions. Return any one of them.

// Example 1:

// Input : str = "geeksforgeeks"
// Output: 1
// Explanation: All the repeated characters of the
// given string can be rearranged so that no 
// adjacent characters in the string is equal.
// Any correct rearrangement will show a output
// of 1.
// Example 2:

// Input : str = "bbbbb"
// Output: 0
// Explanation: Repeated characters in the string
// cannot be rearranged such that there should not
// be any adjacent repeated character.

// Your task :
// You dont have to read input or print anything. Your task is to complete the functionrearrangeString() which takes the string as input and returns the modified string. If the string cannot be modified return "-1".
// Note:The generatedoutput is 1 if the string is successfully rearranged and is 0 if rearranging is not possible.
 
// Expected Time Complexity : O(NlogN), N = length of String
// Expected Auxiliary Space : O(number of english alphabets)


string rearrangeString(string str)
    {
        //code here
        unordered_map<char,int>umap;
		for(int i=0;i<str.size();i++){
		    umap[str[i]]++;
		}
		
		priority_queue<pair<int,char> >pq;
		
		for(int i='a';i<='z';i++){
		    if(umap[i]>0)
		    pq.push({umap[i],i});
		    
		    if(umap[i]>(str.size()+1)/2)
		    return "-1";
		}
		string res="";
		
		while(pq.size()>=2){
		    pair<int,char>a=pq.top();
		    pq.pop();
		    
		    pair<int,char>b=pq.top();
		    pq.pop();
		    
		    res=res+a.second;
		    res=res+b.second;
		    
		    if(a.first-1>0)
		    pq.push({a.first-1,a.second});
		    
		    if(b.first-1>0)
		    pq.push({b.first-1,b.second});
		}
		
		while(!pq.empty())
		res=res+pq.top().second,pq.pop();
		
		return res;
    }