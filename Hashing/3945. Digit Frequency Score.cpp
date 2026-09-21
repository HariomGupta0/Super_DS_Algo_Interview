https://leetcode.com/problems/digit-frequency-score/description/?envType=problem-list-v2&envId=hash-table

//Cute question , only you need to know the digit concept 

class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum =0;

        
        while (n > 0) {
            // Extract the current last digit of the number.
            long long digit = n % 10;

             sum +=digit;

            // Remove the digit that has already been used. 
            n /= 10;
        }

        return sum;
        
    }
};
