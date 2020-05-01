// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black
//  Player.cpp
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#include "Player.h"
#include <string>

Player::Player()
{
	cardCount = 0;
}
string Player::get_player_name()
{
    return Player_name.c_str();
}
int Player::get_player_id()
{
    return player_id;
}
int Player::get_totalchips()
{
    return total_chips_left;
}

void Player::put_player_info(string name,int id,int chips)
{
    name=Player_name;
    id=player_id;
    chips=total_chips_left;
    
}

void Player::set_player_cards(int card_number, string card_color)
{
	
}

int Player::update_totalchips(int current, int chips_won, int chips_lost)
{
    return current + chips_won - chips_lost;
}

void Player::set_contributions(int chips)
{
	update_totalchips(total_chips_left,0,chips);
}

void Player::set_card_rank ()
{
	int i;
	int j;
	for(i=0;i<4;i++)
	{
		int highcard = i;
		for(j=i+1;j<5;j++)
		{
			/*TODO*/
		}
	}
}

void Player::set_order(int order)
{
    playerorderrank=order;
}

int Player::get_cards_rank()
{

}

int Player::get_order()
{

}


