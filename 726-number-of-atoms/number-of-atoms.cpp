class Solution {
public:
    string countOfAtoms(string f) {
        map<string,int> m;
        f+=')';
        int n=f.size();
        stack<pair<string,int>> s;
        s.push({"(",0});   

        for(int i=0;i<n;){

            if(f[i]>='A'&& f[i]<='Z'){  
                int j=i;
                string atom="";
                atom+=f[j++];
                while(f[j]>='a'&&f[j]<='z') 
                 atom+=f[j++];  

                int freq=0;
                while(f[j]>='0' && f[j]<='9')   freq=freq*10+f[j++]-'0';    
                if(freq==0) freq=1;
                s.push({atom,freq});   
                i=j;
            }
            else if(f[i]==')'){ 

                int j=i+1;
                int freq=0;
                while(j<n && f[j]>='0' && f[j]<='9')   
                    freq=freq*10+f[j++]-'0';   
                if(freq==0) freq=1;
                stack<pair<string,int>> temp;
                while(s.top().first!="("){
                    auto t=s.top(); s.pop();
                    temp.push({t.first,t.second*freq});
                }
                s.pop();
                while(temp.size()){
                    s.push(temp.top()); temp.pop();
                }
                i=j;
            }
            else if(f[i]=='(') {
             s.push({"(",0}); 
               i++;
               }
        }
        while(s.size()){
            auto t=s.top(); s.pop();
           m[t.first]+=t.second;  
        }
        string ans="";
        for(auto x:m){
            ans+=x.first+(x.second>1?to_string(x.second):"");   
        }  
        return ans;
    }
};