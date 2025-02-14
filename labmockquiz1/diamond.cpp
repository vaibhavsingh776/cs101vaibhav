#include<simplecpp>
main_program {
    int n;
    cin >> n; // take input for the size of the diamond
    int spaces = n/2;  //leading spaces before the stars
    int innerSpaces = -1 ; // spaces inside the diamond

    // upper half including the middle row
    for(int i = 1; i <= (n+1)/2; i++) {
        cout << string(spaces, ' ');// print the leading spaces
        cout << "*"; // print the first star

         if (innerSpaces >=1) {
            cout << string(innerSpaces, ' ');
            cout << "*";
         }

         cout << endl;
         spaces--;
         innerSpaces+=2;
    
    }
 

    spaces = 1;
    innerSpaces = n - 4;

    for (int i = 1; i < (n + 1) / 2; i++) {
        cout << string(spaces, ' '); // Print leading spaces
        cout << "*"; // Print first star

        if (innerSpaces >= 1) {
            cout << string(innerSpaces, ' '); // Print inner spaces
            cout << "*"; // Print second star
        }

        cout << endl;
        spaces++; // Increase leading spaces
        innerSpaces -= 2; // Reduce inner spaces
    }

    

}
