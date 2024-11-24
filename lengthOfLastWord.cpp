/* https://leetcode.com/problems/length-of-last-word/description/?envType=problem-list-v2&envId=string&difficulty=EASY */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count=0;
        bool sflag=false;
        for(int i=n-1;i>=0;i--)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                sflag=true;
                count++;
            }
            else
            {
                if(sflag == true)
                {
                    return count;
                }
            }
        }
        return count;
    }
};
