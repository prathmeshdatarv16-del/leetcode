class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int l=s.length();
        //vector<string>r="";
        //if(s=="")return 0;
        if(l==1) return 1;
        int i=l-1;
        while(s[i]==' ' && i>=0)
        {
            i--;
            if(i<0) break;
        }
        int count=0;
        while(s[i]!=' ' && i>=0)
        {
            i--;
            count++;
            if(i<0) break;
        }
        return count;       
    }
};