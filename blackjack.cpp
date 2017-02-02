//
//  main.cpp
//  Blackjack
//
//  Created by Leonardo Lima on 2/1/17.
//  Copyright © 2017 Appble. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

//Global Variables
int playerCard1, playerCard2;
int dealerCard1, dealerCard2;

//Functions
void playerCards();
void dealerCards();
void compareSum(int , int);
int oneCard(int *);

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    int playerSum = 0, dealerSum = 0;
    
    cout << "Blackjack" << endl;
    cout << "*********" << endl;
    cout << endl;
    cout << "Welcome! Sit down and let's play it! "<< endl;
    cout << "Press ENTER to get cards" << endl;
    cin.get();
    
    // get cards
    playerCards();
    dealerCards();
    
    playerSum = playerCard1 + playerCard2;
    dealerSum = dealerCard1 + dealerCard2;
    
    cout << "Your Cards are " << playerCard1 << " and " << playerCard2 << endl;
    cout << "The sum of the cards is :" << playerSum <<endl;
    cout << endl;
    cout << "House cards are " << dealerCard1 << " and " << dealerCard2 << endl;
    cout << "The sum of the cards is :" << dealerSum <<endl;
    
    char answer = ' ';
    int playernewCard, housenewCard;
    
    cout << "Do you want to hit: " << endl;
    cin >> answer;
    
    
    switch (answer) {
        
            case 'y':
            case 'Y':
            
            do {
            oneCard(&playernewCard); // Deal a single card
            cout << "Your card is : " << playernewCard << endl;
            playerSum = playerSum + playernewCard;
            cout << "Your new sum is : " << playerSum << endl;
                
                if (playerSum > 21){
                    cout << "Busted " << endl;
                }else{
                    cout << "Do you want to hit: " << endl;
                    cin >> answer;
                }

            } while ((answer == 'y' || answer == 'Y') && playerSum < 21);
        
         case 'N':
         case 'n':
            
            while (dealerSum < playerSum && dealerSum < 21 && playerSum < 21){
                oneCard(&housenewCard); // Deal a single card
                dealerSum = dealerSum + housenewCard;
                cout << "The house now has " << dealerSum << endl;
            }
    }
   
    cout << endl;
    // Compare sums
    compareSum(dealerSum,playerSum);
 
    return 0;
}

void playerCards(){
    
    playerCard1 = rand()%11 + 1;
    playerCard2 = rand()%11 + 1;
    
}
void dealerCards(){
    
    dealerCard1 = rand()%11 + 1;
    dealerCard2 = rand()%11 + 1;
    
}

void compareSum(int house, int player){
    
    if (player == 21)
        cout << "Blackjack!! You win!!!" << endl;
    else if (player < 21 && house > 21)
        cout << "Dealer Bust!! You win!!" << endl;
    else if (player > 21)
        cout << "You Bust....Dealer wins" << endl;
    else if (player < 21 && house == 21)
        cout << "Dealer has Blackjack...You loose" << endl;
    else
        cout << "Dealer wins." << endl;
}
int oneCard(int *pd ) {

    *pd = rand()%11 + 1;
    
    return *pd;
}
