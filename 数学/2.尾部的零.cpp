class Solution {
 public:
    // param n : description of n
    // return: description of return
    long long trailingZeros(long long n) {
        long long count = 0;
        while(n)
        {
            count = count + n / 5;
            n = n / 5;
        }
        return count;
    }
};
