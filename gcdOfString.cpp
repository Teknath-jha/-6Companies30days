class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1 == str2) return str1;
        
        if(str1.length() > str2.length())
            swap(str1,str2);
        
        // str1 is smaller or equal
        string s1="";
        int mx=0;
        for(int i=0;i<str1.length();i++){
            s1=str1.substr(0,i+1);
            
             int occur= 0;
            string::size_type pos = 0;
            string s = str2;
            string target = s1;
           while ((pos = s.find(target, pos )) != string::npos) {
                  ++ occur;
                  pos += target.length();
           }
            
            int occur2= 0;
             pos = 0;
             s = str1;
             target = s1;
             while ((pos = s.find(target, pos )) != string::npos) {
                  ++ occur2;
                  pos += target.length();
           }
            
           if(s1.length()*occur==str2.length() and s1.length()*occur2==str1.length())
               mx=max(mx,i+1);
            
            cout<<mx<<" "<<s1<<endl;
        }
        if(mx >0)return str1.substr(0,mx);
        return "";
    }
};