// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black
//  Player_cards.cpp
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#include "Player_cards.h"
#include "Dealer.h"

Player_cards::Player_cards()
{
    
}

void Player_cards::setfirst(Dealer::a_card card1)
{
    first=card1;
}

void Player_cards::setsecond(Dealer::a_card card2)
{
    second=card2;
}

void Player_cards::setthird(Dealer::a_card card3)
{
    third=card3;
}

void Player_cards::setfourth(Dealer::a_card card4)
{
    fourth=card4;
}

void Player_cards::setfifth(Dealer::a_card card5)
{
    fifth=card5;
}
