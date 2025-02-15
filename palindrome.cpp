#include<simplecpp>

main_program {
    unsigned int n, r = 0;
    cin >> n;

    for(int q = n; q > 0 ; q = q/10){ // in the first iteration q takes 123 original value, that means q changes its value to 1/10th after every iteration has run and not beforehand only

        r = (10 * r) + (q % 10);
    }
    if(n == r) cout << "palindrome" << endl;
    else cout << "not palindrome" << endl;
}