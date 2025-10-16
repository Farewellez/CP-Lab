#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        std::string string_x = std::to_string(x);
        for (int i = 0; i < string_x.size()/2; i++){
            if (string_x[i] != string_x[string_x.size() - i - 1]){
                return false;
            }
        }
        return true;
    }
};
