class Solution {
public:
    map<vector<int>,vector<int>>dp;

   vector<int>recursion(int i,int j,string &s){
       if(j-i+1<=2){
           // we only have a number here
           // it can either be 2 digit number or 1 digit number
           return {stoi(s.substr(i,j-i+1))};
       }
       if(dp.find({i,j})!=dp.end()){
           return dp[{i,j}];
       } // this is just the memoisation part
       vector<int>temp;  // stores all possible values in the range (i,j)
       for(int k=i;k<=j;k++){
           if(s[k]=='+' || s[k]=='-' || s[k]=='*'){
               // means we found an operation
               // there is a left part and there is a right part
               vector<int>one = recursion(i,k-1,s);
               vector<int>two = recursion(k+1,j,s);
               if(s[k]=='+'){
                   for(auto x:one){
                       for(auto y:two){
                           temp.push_back(x+y);
                       }
                   }
               }else if(s[k]=='-'){
                   for(auto x:one){
                       for(auto y:two){
                           temp.push_back(x-y);
                       }
                   }
               }else if(s[k]=='*'){
                   for(auto x:one){
                       for(auto y:two){
                           temp.push_back(x*y);
                       }
                   }
               }
           }
       }
       return temp;
   }

    vector<int> diffWaysToCompute(string expression) {
        return recursion(0,expression.size()-1,expression);
    }
};