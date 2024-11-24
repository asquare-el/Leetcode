/* Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters. */

class Solution {
public:
    int strStr(string h, string n) {
        int a=h.length();
        int b=n.length();
        for(int i=0;i<a-b+1;i++)
        {
            if(h.substr(i,b)==n)
            return i;
        }
        return -1;
    }
};
