// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s="";
  int count=0;
  if(src.length()==0) return s;
  
  for(int i=0;i<src.length();i++){
      count=0;
      s+=src[i];
      while(src[i]==src[i+1] and i+1 < src.length())
        count++,i++;
        
      s+=to_string(count+1);
    //   cout<<s<<" ";
  }
  return s;
}     
 
