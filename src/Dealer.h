// Group 2 --->   Sumiran Thapa     Mohit Tamang    Chandler Black

//  Dealer.h
//  ProjectDesign
//
//  Created by Sumiran on 3/25/20.
//  Copyright © 2020 Sumiran. All rights reserved.
//

#ifndef Dealer_h
#define Dealer_h


#include <string>

using namespace std;

class Dealer
{
    public:
        struct a_card
        {
            int card;
            string color;
        };
        Dealer();
        void shuffle();
        void newdeck();
        void deal(int p);
        a_card exchange();
        
    private:
        a_card deck[52];
        int rem;

};
#endif /* Dealer_h */
