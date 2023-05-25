class Solution
{
public:
    int evenlyDivides(int N)
    {
        int count = 0;

        // Iterate through each digit of N
        while (N != 0)
        {
            int digit = N % 10; // Get the last digit

            // Skip if the current digit is 0
            if (digit == 0)
            {
                N /= 10; // Remove the last digit
                continue;
            }

            // Check if N is evenly divisible by the current digit
            if (N % digit == 0)
            {
                count++; // Increment count if it is
            }

            N /= 10; // Remove the last digit
        }

        return count;
    }
};
