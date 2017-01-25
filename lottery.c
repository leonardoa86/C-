#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

const int TOTALNUMBERS = 49;
void Menu();
void PlayerNumbers(int[]);
void LoterryNumbers(int[]);
void SortNumber (int[]);
void CompareNumbers(int[], int[]);
int main(){

    //psudo number
    srand(unsigned(time(NULL))); //seeds
    int player_number[6];
    int house_numbers[TOTALNUMBERS];
    char choice[2];
    do{
   
            Menu(); //call menu display
            PlayerNumbers(player_number); //Players choose numbers
            LoterryNumbers(house_numbers);// Draw Numbers
            SortNumber(player_number);
            SortNumber(house_numbers);
            CompareNumbers(house_numbers,player_number);

    
            cout << "Do you want to rerun? (Y/N)" << endl;
            cin >> choice[0];
    
    }while(choice[0] == 'y' || choice[0] == 'Y' );
    
    return 0;
}
void Menu(){
    cout << "\t\t ---------------------- \t\t" << endl;
    cout << "\t\t Welcome to the Loterry \t\t" << endl;
    cout << "\t\t ---------------------- \t\t" << endl;
}
void PlayerNumbers(int players_numbers[]){
    
    cout << "Choose 6 numbers between 1 - 49 " <<endl;
    for( int i = 0 ; i < 6 ; i++){
        while( players_numbers[i] < 1 || players_numbers[i] > 49){
                cout << " Number " << (i+1)<< endl;
                cin >> players_numbers[i];
                }
        }
}
void LoterryNumbers(int total_balls[]){
    
    for (int i = 0; i < 6; i ++){
        
        total_balls[i] = rand() % 49 + 1;
        
        while( total_balls[i] <= 1 || total_balls[i] >= 49){
            
            total_balls[i] = rand() % 49;
            cout << total_balls[i];
        }
    }
}
//Bubble Sort Function
void SortNumber (int sort_numbers[]){
    
    int temp;
    //swap 5 times because there are only 6 numbers
    for(int counter = 5; counter > 0; counter--){
        for (int i = 0; i < 6; i++){
            
            //sort the numbers starting from the lowest to the highest
            if(sort_numbers[i] > sort_numbers[i+1]){
                
                temp = sort_numbers[i+1];
                sort_numbers[i+1] = sort_numbers[i];
                sort_numbers[i] = temp;
            }
        }
    }
     return;
}
void CompareNumbers(int house_numbers[], int players_numbers[]){
    string yes = "YES";
    string no = "NO";
    int count = 0;
    
    cout << endl;
    
    cout << "Winning Numbers" <<endl;

    
    for(int i = 0 ; i < 6 ; i++){
        // compare the numbers and count the matchs one
        if(!(house_numbers[i] == players_numbers[i])){
            cout <<house_numbers[i] << endl;
            
        }else{
            count++;
        }
    }
    cout << "Total Matching Numbers ::: " <<count <<endl;
}
