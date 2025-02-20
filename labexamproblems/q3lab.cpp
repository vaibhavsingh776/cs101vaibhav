#include <simplecpp>

char giveDecodedCharacter(char c) {
        return 155 - c; 
 
}

main_program {
    int n;
    cin >> n;  

    for(int i = 0; i < n; i++){
        char c1;
        cin >> c1;
        char a = c1;
        char previous;
        if(a == previous){
            continue;
        }
        char decoded = giveDecodedCharacter(a);
        cout << decoded;
        previous = a;
       
    }

    
}
