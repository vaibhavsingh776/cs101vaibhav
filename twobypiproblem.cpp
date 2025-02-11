#include <simplecpp>

main_program {
    int n;  // Number of terms to compute
    cout << "Enter the number of terms (n): ";
    cin >> n;

    double product = 1.0;  // Initialize the product to 1
    double nestedRoot = sqrt(2);  // First term starts with sqrt(2)

    // Compute the product of the first n terms
    repeat(n) {
        product *= nestedRoot / 2;  // Multiply by the current term
        nestedRoot = sqrt(2 + nestedRoot);  // Update the nested root
    }

    cout << "The product of the first " << n << " terms is: " << product << endl;
}
//calculate the value of 2/pi using the infinite loop given