class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int> q ;
        int m = sandwiches.size();
        for(int i = 0 ; i < n ; i++)
        {
            q.push(students[i]) ;
        }   
        for(int i = 0 ; i < n ; i++)
        {
            int count = 0 ;
            bool alloted = 0 ;
            while(!q.empty() && count < n)
            {
                if(q.front() == sandwiches[i] )
                {
                    q.pop() ;
                    alloted = 1 ;
                    break ;
                    }
                else 
                {
                    int a = q.front() ;
                    q.pop() ;
                    q.push(a) ;
                    count++ ;
                    }
                  
            }
            if(!alloted)
            {
                return n-i ;
                }
            
        }  
        return 0 ;     
    }
};      