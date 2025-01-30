#include <simplecpp>

main_program {
    int x, i;
    cin >> x;
    
    bool isPrime = true;

    for (i = 2; i * i <= x; i++) {  
        if (x % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime && x > 1) {
        cout << "sus" << endl;  
    } else {
        cout << "not sus" << endl;  
    }
}
