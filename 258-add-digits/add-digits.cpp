class Solution {
public:
    int addDigits(int num) {
// 1  -> 1
// 2  -> 2
// ...
// 9  -> 9

// 10 -> 1
// 11 -> 2
// 12 -> 3

// 18 -> 9
// 19 -> 1
// 20 -> 2
//.  Ye modulo 9 pattern follow karta hai.

if(num == 0)
    return 0;

return 1 + (num - 1) % 9;
    }
};