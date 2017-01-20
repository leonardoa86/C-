//Check whether a string is a number or not.

#include <iostream>
#include <stdlib.h>
using namespace std;

bool isNumber(string);

int main(){
    
    string num;
    char decision;
    do{       
        cout << "Enter a number: " << endl;
        cin >> num;
        
        if (isNumber(num)){     
            cout << "It is a number " << endl;    
        }else{
            cout << "It is not a number " << endl;
        }
        cout << "Do you want to rerun? " << endl;
        cin >> decision;

    }while(decision == 'y' || decision == 'Y' );
 return 0;
}

bool isNumber(string tmp){
    
    if (tmp[0] == '0')
        return false;
    for(int i = 0; i < tmp.length(); i++)
    {
        if(!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;
    }
    return true;  
}
