// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black

//  Player_cards.h
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#ifndef Player_cards_h
#define Player_cards_h

#include <iostream>
#include <string>
#include "Dealer.h"

using namespace std;


class Player_cards
{
private:
    Dealer::a_card hand[5];

public:
    Player_cards();
    void setfirst(Dealer:: a_card hand[0]);
    void setsecond(Dealer::a_card hand[1]);
    void setthird(Dealer::a_card hand[2]);
    void setfourth(Dealer::a_card hand[3]);
    void setfifth(Dealer::a_card hand[4]);
};
#endif /* Player_cards_h */
