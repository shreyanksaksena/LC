class Solution {
public:
   vector<string>ans;

    bool isValid(string &s){
       int cnt =0;
       for(auto x:s){
           if(x=='('){
               cnt++;
           }else{
               if(cnt<=0){
                   return false;
               }
               cnt--;
           }
       }
       return (cnt==0);
    }
   void recursion(string s, int n)
{
    if (s.size() == 2 * n)
    {
       if(isValid(s)){
           ans.push_back(s);
       }
        return;
    }
    string open = s + '(';
    recursion(open, n);
    string closed = s + ')';
    recursion(closed, n);
}

    vector<string> generateParenthesis(int n) {
        string s;
        recursion(s,n);
        return ans;
    }
};