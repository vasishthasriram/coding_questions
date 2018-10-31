class Solution {
public:
    long int reverse(long int x) {
        bool sign=x>=0?0:1;
        if(sign)
        {
            x=abs(x);
            
        }
        long int rev=0;
        string t=to_string(x);
        cout<<t<<endl;
        std::reverse(t.begin(),t.end());
        rev=stol(t);
        cout<<rev<<endl;
        if(sign)
        {
            rev=0-rev;
            
        }
        if(rev>2147483647||rev<-2147483648)
            return 0;
        return rev;
    }
};
