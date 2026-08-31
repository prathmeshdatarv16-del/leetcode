class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string result="";
        string ref=strs[0];
        for(int i=0;i<ref.length();i++)
        {
            //take string 1
            //compare with the second pos and if match then update how much in the result and if not then false
            //and continue this forever util length
            
            for (int j = 1; j < strs.size(); j++) 
            {
                if (i == strs[j].length() || strs[j][i] != ref[i]) 
                {
                    return ref.substr(0, i); 
                }
            }

        }

         
        return ref;      
    }
};