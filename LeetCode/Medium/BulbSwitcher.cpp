class Solution {
public:
    int bulbSwitch(int n) {
        // 0 -> 0 0 0 0 0 0 0 0 0 0
        // 1 -> 1 1 1 1 1 1 1 1 1 1
        // 2 -> 1 0 1 0 1 0 1 0 1 0
        // 3 -> 1 0 0 0 1 1 1 0 0 0
        // 4 -> 1 0 0 1 1 1 1 1 0 0
        // 5 -> 1 0 0 1 0 1 1 1 0 1
        // 6 -> 1 0 0 1 0 0 1 1 0 1
        // 7 -> 1 0 0 1 0 0 0 1 0 1
        // 8 -> 1 0 0 1 0 0 0 0 0 1
        // 9 -> 1 0 0 1 0 0 0 0 1 1
        // 10 -> 1 0 0 1 0 0 0 0 1 0

        return sqrt(n);
    }
};