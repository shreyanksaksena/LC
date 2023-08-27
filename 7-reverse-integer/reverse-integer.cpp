class Solution {
public:
 int reverse(int x) {
    int result = 0;

    while (x != 0) {
        // Check for overflow/underflow before updating result
        if (result > INT_MAX / 10 || result < INT_MIN / 10) {
            return 0;
        }
        int digit = x % 10;
        result = result * 10 + digit;
        x /= 10;
    }
    return result;
}
};