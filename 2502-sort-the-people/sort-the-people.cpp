class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>vec;
        vector<string>ans;
      for (int i = 0; i < heights.size(); i++) {
            vec.push_back(make_pair(heights[i], names[i]));
        }
        sort(vec.begin(),vec.end());
        for(int i=(vec.size())-1 ; i>=0 ; i--)
        {
        ans.push_back(vec[i].second);
        }
         return ans;
    }
};