class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.length();
        if(n<=k)return s;
        while(s.length()>k)
        {
            n=s.length();
            string str="";
            for(int i=0;i<n;i=i+k)
            {
                int cnt=0;
                for(int j=i;j<min(i+k,n);j++)
                {
                    cnt+=s[j]-'0';
                }
                str+=to_string(cnt);
            }
            s=str;
        }
        return s;
    }
};