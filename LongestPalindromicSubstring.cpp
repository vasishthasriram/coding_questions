class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int _s=0,_e=0,_maxlen=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            int start=i-1;
            int end=i+1;
            while(start>=0&&end<s.length())
            {
                if(s[start]==s[end])
                {
                    _s=start;
                    _e=end;
                    start--;
                    end++;
                }
                else
                    break;
            }
            if(_e-_s+1>_maxlen)
            {
                _maxlen=_e-_s+1;
                //cout<<_maxlen<<endl;
                ans=s.substr(_s,_e-_s+1);
            }
        }
        
        for(int i=0;i<s.length();i++)
        {
            int start=i;
            int end=i+1;
            while(start>=0&&end<s.length())
            {
                if(s[start]==s[end])
                {
                    _s=start;
                    _e=end;
                    start--;
                    end++;
                }
                else
                    break;
            }
            if(_e-_s+1>_maxlen)
            {
                _maxlen=_e-_s+1;
                ans=s.substr(_s,_e-_s+1);
            }
        }
        return ans;
    }
};
