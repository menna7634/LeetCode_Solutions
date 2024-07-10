class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for ( int i=0 ; i<logs.size() ; i++)
        {
            if(logs[i]=="../" && !st.empty())
            {
                st.pop();
            } else if (logs[i]!="./" && logs[i]!="../") {
              st.push(logs[i]);
            }
        }
        return st.size();
        
    }
};