#include <simplecpp>

int main() {
    turtleSim();
    penUp();
    forward(-230);  // Move start point to the left
    penDown();

    int N, prevN = -1;  // Start with an invalid previous state

    cout << "Enter binary waveform sequence (e.g., 101010): " << endl;
    string binaryInput;
    cin >> binaryInput;

    for (char bit : binaryInput) {
        N = bit - '0';  // Convert character to integer (0 or 1)

        if (N != prevN) {
            int angle = (N == 1) ? -90 : 90;  // Determine angle direction
            right(angle);
            forward(100);
            left(angle);
        }

        // Draw horizontal segment regardless of state
        forward(50);

        // Update for next iteration
        prevN = N;
    }

    wait(5);  // Keep the TurtleSim window open for 5 seconds
    return 0;
}
