// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black

//  Dealer.cpp
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//
#include <iostream>
#include "Dealer.h"

Dealer::Dealer()
{
}
void Dealer::newdeck()              //generates a new deck of cards, to start a game and can be used to reset the deck once a game is over
{
    for(int i=0;i<52;i++)                  //For all 52 cards, put 13 numbers with 4                                   different colors
    {                               //Counts from 0 to 51, contains 52 cards
        if(i<13)
        {
            deck[i].color="Spades";
            deck[i].card=i+1;
        }
        if(i>=13 && i<26)
        {
            deck[i].color="Clubs";
            deck[i].card=i-13+1;
        }
        if(i>=26 && i<39)
        {
            deck[i].color="Hearts";
            deck[i].card=i-26+1;
        }
        if(i>=39 && i<52)
        {
            deck[i].color="Diamonds";
            deck[i].card=i-39+1;
        }
        //cout<<"Displaying number .. "<<i<<" >>> It is "<<deck[i].card<<" of "<<deck[i].color<<"\n";
        
    }
    rem=52;                 //52 cards in total
}
void Dealer::shuffle()           //shuffle the remaining cards,rem is the remaining cards
{
    for(int i=0;i<=rem;i++)
    {
        cout<<i<<" It is "<<deck[i].card<<" of "<<deck[i].color<<"\n";
    }
    a_card temp;
    int random;
    for(int i=0;i<rem;i++)
    {
        random=rand()%rem;
        swap(deck[i],deck[random]);
        
    }
    
    for(int i=0;i<=rem;i++)
    {
        cout<<i<<" It is "<<deck[i].card<<" of "<<deck[i].color<<"\n";
    }
     
}
// Chandler: We can't input data for player becuase Player files use Dealer.h. What if this function only returns a new card and decreases the total deck. Put this function into a loop on the main() so it alternates between players AND give out 5 cards to each.
void Dealer::deal(int p)   //rem is the remaining cards and p is the number of players
{
    a_card five[0];
    for (int i=0;i<p;i++)
    {
        //cout<<"\nFor this player\n";
        for(int k=0;k<5;k++)
        {
            //cout<<rem<<"=="<<deck[rem].card<<" of " <<deck[rem].color;
            five[k]=deck[rem];
            //cout<<five[k].card <<" is "<<five[k].color<<endl;
            
            //*********HERE TAKE THE INPUT DATA FOR EACH PLAYER HERE***************
            //This is distributing, so assign the arrays to player_cards
            rem-=1;
        }
    }
}

Dealer::a_card Dealer::exchange() // swap any random card from the remaining deck to the end and reduce the size of the deck, any player card could be assigned to this function and the dealer would exchange it for another card, though the limit is only 3
// Chandler: Make it so the max number of times a player can call this function is 3.
{
    int random;
    a_card temp;
    
    //random=rand()%rem; Chandler: No need for a random card; the deck is shuffled
    temp=deck[rem];
    
    //swap(deck[rem],deck[random]); Chandler: Swepping cards in the deck is like shuffling
    rem--;
    return temp;
}
