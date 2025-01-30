#include <simplecpp>
#include<time.h> 
main_program {

srand(time(NULL));
    int N;
    cin >> N;

    // Variables to count occurrences of each face
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;

    repeat(N) {
        int roll = (rand() % 6) + 1; // Generate random number between 1 and 6

        // Increment corresponding counter
        if (roll == 1) count1++;
        else if (roll == 2) count2++;
        else if (roll == 3) count3++;
        else if (roll == 4) count4++;
        else if (roll == 5) count5++;
        else count6++;
    }

    // Output the counts for each face
    cout << "1: " << count1 << endl;
    cout << "2: " << count2 << endl;
    cout << "3: " << count3 << endl;
    cout << "4: " << count4 << endl;
    cout << "5: " << count5 << endl;
    cout << "6: " << count6 << endl;
}