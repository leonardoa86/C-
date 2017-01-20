#include <iostream>
#include <stdlib.h>
#define Pi 3.14

void Menu();
void MenuDecision(int);
double areaCircle(double);
double areaTriangle(double, double);
double areaSquare(double);
double areaRect(double,double);
double areaTrap(double,double,double);


int main(){
    int option;
    char choice;
    
    do{
        
        Menu();
        cin >> option;
        MenuDecision(option);
    
        cout << "Do you want to rerun? " << endl;
        cin >> choice;
       
        }while(choice == 'y' || choice == 'Y' );
    
    return 0;
}

void Menu(){
    
    cout << "Enter option to calculate the area of : " << endl;
    cout << "1. Circle " << endl;
    cout << "2. Triangle " << endl;
    cout << "3. Square " << endl;
    cout << "4. Rectangle " << endl;
    cout << "5. Trapezoid " << endl;
    cout << "6. Exit " << endl;
}

void MenuDecision(int choice){
    
    double r, Tbase, Theight, square;
    double Rbase, Rheight, TLbase, TTbase, TTheight;
    
    switch (choice) {
        case 1:
            cout << "Enter radious : " <<endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Enter base and height: " <<endl;
            cin >> Tbase >> Theight;
            areaTriangle(Tbase,Theight);
            break;
        case 3:
            cout << "Enter number : " <<endl;
            cin >> square;
            areaSquare(square);
            break;
        case 4:
            cout << "Enter base and height : " <<endl;
            cin >> Rbase >> Rheight;
            areaRect(Rbase,Rheight);
            break;
        case 5:
            cout << "Enter top base, lower base and height : " <<endl;
            cin >> TLbase >> TTbase >> TTheight;
            areaTrap(TLbase,TTbase, TTheight);
            break;
        case 6:
            cout << "Bye" <<endl;
            exit(0);
        default:
            cout << "Option not available " << endl;
            break;
    }
    
}

double areaCircle(double r){
    double result = Pi * r * r;
    
    cout << "The area of the circle is : "<< result << endl;
    
    return result;
}
double areaTriangle(double b, double h){
    double result = (b*h)/2;
    
    cout << "The area of the triangle is : "<< result << endl;
    
    return result;
}
double areaSquare(double b){
    double result = b*b;
    
    cout << "The area of the square is : "<< result << endl;
    
    return result;
}
double areaRect(double b, double h){
    double result = (b*h);
    
    cout << "The area of the rectangle is : "<< result << endl;
    
    return result;
}
double areaTrap(double b, double b2, double h){
    double result = ((b*b2/2)*h);
    
    cout << "The area of the trapezoid is : "<< result << endl;
    
    return result;
}
