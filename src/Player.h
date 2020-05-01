// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black
//  Player.h
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <iostream>
#include <string>
#include "Player_cards.h"
#include "Dealer.h"
using namespace std;


enum Hand{ HighCard, Pair, twoPairs, threeOfAKind,
                straight, Flush, fullHouse, fourOfAKind,
                straightFlush, royalFlush};

class Player
{
private:
    string Player_name;
    int player_id;
    int total_chips_left;
    int player_contributions;
    int chips_won;
    int chips_lost;
    int handStrength;
    //Card hand[5];
    int cardCount;
    bool IsOnePair();
    bool IsTwoPairs();
    bool IsTriplets();
    bool IsStraight();
    bool IsFlush();
    bool IsFullHouse();
    bool IsFourOfKind();
    bool IsStraightFlush();
    bool IsRoyalFlush()
    
public:
    Player();
    string get_player_name();
    int get_player_id();
    int get_totalchips();
    //void show_player_info();
    void put_player_info(string name,int id,int chips);
    void set_player_cards(int card_number, string card_color);
    int update_totalchips(int current, int chips_won,int chips_lost);
    void set_contributions(int chips); //NEW
    void set_card_rank();
    void set_order(int order);
    int get_cards_rank(); //NEW
    int get_order(); //NEW
};

#endif /* Player_h */
