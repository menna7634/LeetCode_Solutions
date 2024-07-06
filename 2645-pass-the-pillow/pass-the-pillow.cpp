class Solution {
public:
    int passThePillow(int n, int time) {
        int res=1,f=1;
    for ( int i=1 ; i<=time ; i++)
    {
       if(res==1)
       {
        f=1;
       }
       if(res==n)
       {
        f=0;
       }
       if(f)
       {
        res++; 
       } else {
        res--;
       }
    }
    return res;
      }  
};