class Solution {
public:
    bool isPalindrome(int n) {
        int rev = 0;
        int cpy = n ;
        while(n>0){
            int digit = n%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            rev = rev*10 + digit ;
            n= n/10;
        }
        if(rev == cpy) return true ;

        return false;
        
    }
};