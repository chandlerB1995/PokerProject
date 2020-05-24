// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black

//  Make_a_play.cpp
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#include "Make_a_play.h"
#include "Player.h"

Make_a_play::Make_a_play()
{
    
}

//limit will be the current chips held by the lowest player. limit must be found beforehand.
void Make_a_play::set_playerlimit(int limit)
{
    raise_limit=limit;
}

//Player pays the minimum amount.
void Make_a_play::call(Player p1)
{
    //p1.totalcashinhand -= table_minimum;
}

//Player makes the first bet of the round, setting the minimum betting amount.
void Make_a_play::bet(Player p1, int bet)
{
    if (bet > raise_limit)
        std::cout << "Sorry, that's over the limit for this round." << std::endl;
    else
    {
        //p1.totalcashinhand -= bet;
        table_minimum = bet;
    }
}

//Player raises the minimum amount for the round.
//NOTE: raise is the minimum amount PLUS more.
void Make_a_play::raise(Player p1, int bet)
{
    
    if (bet > raise_limit)
        std::cout << "Sorry, that's over the limit for this round." << std::endl;
    else if (bet < table_minimum)
        std::cout << "Sorry, that's less than the minimum amount." << std::endl;
    else
    {
        //p1.totalcashinhand -= bet;
        table_minimum = bet;
    }
}

//Increases the pot amount.
void Make_a_play::update_totalpot( int amount)
{
    pot += amount;
}

//Transfers all chips from the pot to the winning player's wins.
void Make_a_play::playerPot(Player p1)
{
    //p1.wins = pot;
    pot = 0;
}
