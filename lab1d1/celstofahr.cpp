#include <simplecpp>
#include <iomanip>

main_program {

float celsius, output ;

cin >> celsius ;

output = (celsius * 1.8) + 32;

cout << std::fixed << std::setprecision(2) << output << endl;

}