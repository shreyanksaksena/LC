class Solution {
public:
bool isPalindrome(string &s){
        int n = s.size();
        for(int i=0;i<n;i++){
           if(s[i]!=s[n-i-1]){
               return false;
           }
        }
        return true;
    }

    vector<vector<string>>ans;


    void recursion(int index,string &s,vector<string>&temp){
        if(index==s.size()){
            ans.push_back(temp);
        }
        string curr;
        for(int i=index;i<s.size();i++){
          curr.push_back(s[i]);
          if(isPalindrome(curr)){
              temp.push_back(curr);
              recursion(i+1,s,temp);
              temp.pop_back();
          }
        }
    }

    vector<vector<string>> partition(string s) {
        // we could have a dp array which has all the stuff in it
        // that will be n^2
        vector<string>temp;
        recursion(0,s,temp);
        return ans;
    }
};