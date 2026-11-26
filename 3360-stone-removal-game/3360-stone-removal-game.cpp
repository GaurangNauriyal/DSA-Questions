class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool a = true;

        while (n >= stones) {
            n -= stones;
            stones--;

            a = !a;
        }

        return !a; 
    }
};