#include <simplecpp>
main_program {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        for(int k = 0; k < i; k++) {
            cout << ' ';
        }
        for(int j = 0; j < n - i; j++) {
            if(j % 2 == 0) {
                cout << 'O';
            } else {
                cout << 'X';
            }
        }
        cout << endl;
    }
}