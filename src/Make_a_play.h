// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black

//  Make_a_play.h
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#ifndef Make_a_play_h
#define Make_a_play_h

#include "Player.h"

using namespace std;

class Make_a_play
{
    public:
        Make_a_play();
        void call(Player p1); //Player pays the minimum.
        void bet(Player p1, int bet); //Player makes the first bet of the round.
        void raise(Player p1, int bet); //Player raises from the initial bet.
        void update_totalpot(int amount);
        void playerPot(Player p1);
        void set_playerlimit(int limit);
    
    private:
        int pot;
        int table_minimum;
        int raise_limit;
    
};
#endif /* Make_a_play_h */
