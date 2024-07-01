class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool ok=0;
        for (int i=0 ; i<=arr.size()-3 && arr.size()>=3 ; i++)
        {
            if (arr[i]&1 && arr[i+1]&1 && arr[i+2]&1)
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            return true;
        } else {
            return false;
        }
    }
};