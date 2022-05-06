class Solution {
public:
    string reverseWords(string s) {
        vector<string> x;
        string temp="";
        s+=" ";
        int n=s.size();
        for(int i=0; i<n;i++){
            
            if(s[i]==' '){
                if( temp.length()>0)
                    x.push_back(temp); temp="";
            }
            else temp+=s[i];
        }
        string ans="";
        for(int i=x.size()-1; i>=0; i--){
            ans+=x[i];
            if(i!=0) ans+=" ";
        }
        return ans;
    }
};