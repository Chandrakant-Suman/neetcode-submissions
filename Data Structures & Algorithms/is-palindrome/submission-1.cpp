class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        bool flag=true;
        while(i<j){
            while(i < j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            cout<<s[i]<<" "<<s[j]<<endl;
            if(i==j) return true;
            // if(isalnum(s[i]) && isalnum(s[j])){
            if(tolower(s[i])!=tolower(s[j])) return false;
            // }
            else{
                i++;j--;
            }
        }
        return true;
    }
};
