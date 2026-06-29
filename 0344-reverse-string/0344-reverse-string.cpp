class Solution {
public:
    void reverseString(vector<char>& s) {
        int strt = 0, end = s.size()-1 ;
        while(strt<end){
            swap(s[strt],s[end]);
            end--;
            strt++;
        }
        
    }
};