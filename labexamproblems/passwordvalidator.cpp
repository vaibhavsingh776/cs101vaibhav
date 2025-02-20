#include <simplecpp>

main_program {
    bool upperCase = false;
    bool lowerCase = false;
    bool digit = false;

    char c1;
    for (int i = 0; i < 8; i++) {
        cin >> c1;
        int a = c1; 

        

        if ((a >= 65) && (a <= 90)) { 
            upperCase = true;
        } 
        else if ((a >= 97) && (a <= 122)) { 
            lowerCase = true;
        } 
        else if ((a >= 48) && (a <= 57)) { 
            digit = true;
        } 
        else { 
            cout << "tai tai fish" << endl;
            return 0; 
        }
    }

    // Check final conditions after the loop
    if (upperCase && lowerCase && digit) {
        cout << "khul jaa sim sim" << endl;
    } else {
        cout << "tai tai fish" << endl;
    }
}
