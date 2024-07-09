class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum=customers[0][0]; // 1
        double w=0;
        for ( int i=0 ; i<customers.size() ; i++)
        {
                  if(customers[i][0]<sum){ 
                sum+=customers[i][1]; // 3+5=8     8+3=11
                w+=(sum-customers[i][0]); // 2+(8-2)=8    8+(11-4)=15
            }else{
                sum=customers[i][0]+customers[i][1]; // 1+2=3
                w+=customers[i][1]; // 0+2=2
            }
        }
        return w/customers.size(); //15/3
    }
};

