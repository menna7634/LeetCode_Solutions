class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum=customers[0][0];
        double w=0;
        for ( int i=0 ; i<customers.size() ; i++)
        {
                  if(customers[i][0]<sum){
                sum+=customers[i][1];
                w+=(sum-customers[i][0]);
            }else{
                sum=customers[i][0]+customers[i][1];
                w+=customers[i][1];
            }
        }
        return w/customers.size();
    }
};

