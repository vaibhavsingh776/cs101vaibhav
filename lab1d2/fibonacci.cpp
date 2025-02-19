
#include<simplecpp>
main_program{
  int n;
   cin >> n;
    int minusone = 0;
   int minustwo = 1;
   cout << '0' << ' ' << '1' << ' ';
repeat(n-2){
  
   int next = (minusone + minustwo);
   
   cout << next << ' ';
   minusone = minustwo;
   minustwo = next;
}
 
  
}