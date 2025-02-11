#include <simplecpp>
main_program {
unsigned int n, count = 0;
cin >> n;
for(int i = 1; i < n; i++) {
for(int j = i + 1; j <= n; j++)
count += 1;
}
cout << n << " C 2 = " << count << endl;
}