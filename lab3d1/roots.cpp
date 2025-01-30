#include <simplecpp>
#include <iomanip>  // Include for std::setprecision

main_program {
    double n, low, high, mid, precision;
    cin >> n;  // Input number whose square root we want to find
    low = 0;
    high = n;  // High should be set to the input value
    precision = 0.000001;  // Precision level

    // Binary Search for square root
    while (high - low > precision) {
        mid = (high + low) / 2;
        if ((mid * mid) > n) {  // Compare mid^2 with n instead of high
            high = mid;  // If mid^2 is greater than n, move the high point
        } else {
            low = mid;  // Otherwise, move the low point
        }
    }

    // Calculate the average of low and high for final approximation
    double result = (low + high) / 2;

    // Output the result with 6 decimal places
    cout << std::fixed << std::setprecision(6) << result << endl;
}
