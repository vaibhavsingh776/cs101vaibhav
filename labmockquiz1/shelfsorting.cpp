#include <simplecpp>

// Function to sort four characters using Bubble Sort
void sortBooks(char &a, char &b, char &c, char &d) {
    // First Pass
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);

    // Second Pass
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);

    // Third Pass
    if (a > b) swap(a, b);
}

main_program {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        char a, b, c, d;
        cin >> a >> b >> c >> d;  // Read 4 characters

        sortBooks(a, b, c, d);  // Sort the characters

        cout << a << b << c << d << endl;  // Print the sorted order
    }
}
