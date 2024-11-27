// https://leetcode.com/problems/reverse-integer/

#include <cstdlib>
#include <iostream>
class Solution {
public:
    int reverse(int x) {
        int n=abs(x);
        int rev=0;
        while(n>0)
        {
           int ln = n%10; 
           n=n/10;
           if(rev > INT_MAX/10 || rev < INT_MIN/10){
            return 0 ;
        }
           rev=rev*10+ln;
        }
        if(x<0) return -1*rev;
        else return rev;
    }
};
