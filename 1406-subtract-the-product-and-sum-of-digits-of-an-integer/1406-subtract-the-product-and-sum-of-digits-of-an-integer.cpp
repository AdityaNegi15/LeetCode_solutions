class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;  // Initialize the product to 1
        int sum = 0;      // Initialize the sum to 0

        while (n > 0) {
            int digit = n % 10; // Get the last digit of the number
            product *= digit;   // Multiply the digit to the product
            sum += digit;       // Add the digit to the sum
            n /= 10;            // Remove the last digit from the number
        }

        return product - sum;
    }
};