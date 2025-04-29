class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        if (s.length() != goal.length()) return false;
        std::string doubled = s + s;
        return doubled.find(goal) != std::string::npos;
    }
};