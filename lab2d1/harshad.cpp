#include <simplecpp>

main_program {
    int x, y, z;
    int original_x;
    y = 0;
    cin >> x;
    original_x = x; 

    while (x != 0) {
        y += x % 10;
        x /= 10;
    }

    z = original_x % y;  

    if (z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
