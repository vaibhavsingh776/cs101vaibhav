#include<simplecpp>

main_program {
    int y, d;
    cin >> y >> d;  // Input year and day number

    // Check if it's a leap year
    bool isLeap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);

    int month = 1;  // Start from January

    // January
    if (d > 31) {
        d -= 31;
        month++;
    }

    // February
    if (d > 28) {
        if (isLeap && d > 29) {  // Leap year case
            d -= 29;
            month++;
        } 
        else if (!isLeap) {  // Non-leap year case
            d -= 28;
            month++;
        }
    }

    // March
    if (d > 31) {
        d -= 31;
        month++;
    }

    // April
    if (d > 30) {
        d -= 30;
        month++;
    }

    // May
    if (d > 31) {
        d -= 31;
        month++;
    }

    // June
    if (d > 30) {
        d -= 30;
        month++;
    }

    // July
    if (d > 31) {
        d -= 31;
        month++;
    }

    // August
    if (d > 31) {
        d -= 31;
        month++;
    }

    // September
    if (d > 30) {
        d -= 30;
        month++;
    }

    // October
    if (d > 31) {
        d -= 31;
        month++;
    }

    // November
    if (d > 30) {
        d -= 30;
        month++;
    }

    // December (Final month, no need to check further)

    // Output result in DD/MM/YYYY format
    cout << d << "/" << month << "/" << y << endl;
}
