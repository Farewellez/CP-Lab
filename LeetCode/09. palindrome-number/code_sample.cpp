class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long int temp = 0;
        while(n>0){
            temp = temp * 10 + n%10;
            n /= 10;
        }
        return temp == x;
    }
};
