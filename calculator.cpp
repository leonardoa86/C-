//Calculator 

int main(){
    
    double var1, var2;
    char option, decision;
    
    do{
        cout << "Enter first number: " << endl;
        cin >> var1;
        cout << "Enter second number: " << endl;
        cin >> var2;
    
        cout << "Choose operation below: " << endl;
        cout << "+ - add" << endl;
        cout << "- - subract " << endl;
        cout << "* - multiplication" << endl;
        cout << "/ - divison" << endl;
        cin >> option;
        
        system("cls");
    
    switch (option) {
        case '+':
            cout << var1 << " + " << var2 << " = " <<(var1+var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " <<(var1-var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " <<(var1*var2) << endl;
            break;
        case '/':
            if(var1 <= var2)
                cout << var1 << " / " << var2 << " = " <<(var1/var2) << endl;
            else
                cout << "Cannot divided by zero" << endl;
            break;
            
        default:
            cout << "Operation not vailid" << endl;
            break;
    }
            cout << "Do you want to rerun? " << endl;
            cin >> decision;
            
        
    }while(decision == 'y' || decision == 'Y' );
    
    return 0;
}
