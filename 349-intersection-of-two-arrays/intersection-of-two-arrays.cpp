class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());

   
    vector<int>res;
    for (int s : st1)
    {
        if (st2.find(s)!=st2.end())
        {
            res.push_back(s);
        }
    }
    return res;
    }

};