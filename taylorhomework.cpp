#include <simplecpp>

main_program {

  float x, xdegree;
  cout << "Enter x (in degrees): ";
  cin >> xdegree;

  x = xdegree * PI/180; //convert to radians
  
  int sign = 1;
  int n = 1; 
  float x_power_n = x; 
  float n_factorial = 1;
  float sine_x = x;

    repeat(20) { // Runs 20 iterations
    n += 2;            // Increases n to 3, 5, 7, 9, ... (odd numbers)
    sign = -sign;      // Alternates sign (+ to -, - to +)
    x_power_n *= (x * x); // Computes x^3, x^5, x^7 by multiplying x² each time
    n_factorial *= (n - 1) * n; // Computes 3!, 5!, 7! using factorial formula
    sine_x += sign * x_power_n/n_factorial; // Adds next term to the sum
  } 


  cout << "sin(" << xdegree << ") = " << sine_x << endl; 
}

