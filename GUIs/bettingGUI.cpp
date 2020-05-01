// CSE3310 Spring 2020
//Sumiran Chandler Mohit

//#include <Dealer.h>
//#include <Make_a_play.h>
//#include <Player_cards.h>
//#include <Player.h>

#include <iostream>
#include <gtk/gtk.h>

using namespace std;

// Exits the interface, either by closing out the window or pushing the exchange button.
void destroy(GtkWidget *widg)
{
    gtk_main_quit();
}

//NOTE: The following functions are player events/actions. The buttons to these functions are always open, but unless it's the player's turn, nothing will happen.
// Player checks and passes to the next player. If last player checks (no one bets), every player pays a $1 penalty (unless lowest player has $5 or less).
void checkBtn(GtkWidget *widg)
{
    
}
// Player makes the first bet for the round. This can only happen once per round.
void betBtn(GtkWidget *widg)
{
    gtk_widget_set_sensitive(widg, false);
}
// Player calls and pays the minimum amount. This can only happen when a bet has been made.
void callBtn(GtkWidget *widg)
{
    
}
// Player raises the minimum amount for the round. This can only happen when the first bet is made.
void raiseBtn(GtkWidget *widg)
{
    
}

// Sets the picture according to the player's hand and card number.
/*static void setCard (GtkWidget *picture, Player_cards hand, int N)
{
    if (Player_cards.hand[N].card == 1 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Ace.png");
    else if (Player_cards.hand[N].card == 2 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Two.png");
    else if (Player_cards.hand[N].card == 3 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Three.png");
    else if (Player_cards.hand[N].card == 4 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Four.png");
    else if (Player_cards.hand[N].card == 5 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Five.png");
    else if (Player_cards.hand[N].card == 6 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Six.png");
    else if (Player_cards.hand[N].card == 7 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Seven.png");
    else if (Player_cards.hand[N].card == 8 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Eight.png");
    else if (Player_cards.hand[N].card == 9 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Nine.png");
    else if (Player_cards.hand[N].card == 10 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Ten.png");
    else if (Player_cards.hand[N].card == 11 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Jack.png");
    else if (Player_cards.hand[N].card == 12 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_Queen.png");
    else if (Player_cards.hand[N].card == 13 && Player_cards.hand[N].color == "Clubs")
        gtk_image_set_from_file(picture, "Clubs_King.png");
    
    else if (Player_cards.hand[N].card == 1 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Ace.png");
    else if (Player_cards.hand[N].card == 2 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Two.png");
    else if (Player_cards.hand[N].card == 3 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Three.png");
    else if (Player_cards.hand[N].card == 4 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Four.png");
    else if (Player_cards.hand[N].card == 5 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Five.png");
    else if (Player_cards.hand[N].card == 6 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Six.png");
    else if (Player_cards.hand[N].card == 7 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Seven.png");
    else if (Player_cards.hand[N].card == 8 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Eight.png");
    else if (Player_cards.hand[N].card == 9 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Nine.png");
    else if (Player_cards.hand[N].card == 10 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Ten.png");
    else if (Player_cards.hand[N].card == 11 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Jack.png");
    else if (Player_cards.hand[N].card == 12 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_Queen.png");
    else if (Player_cards.hand[N].card == 13 && Player_cards.hand[N].color == "Diamonds")
        gtk_image_set_from_file(picture, "Diamonds_King.png");
    
    else if (Player_cards.hand[N].card == 1 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Ace.png");
    else if (Player_cards.hand[N].card == 2 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Two.png");
    else if (Player_cards.hand[N].card == 3 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Three.png");
    else if (Player_cards.hand[N].card == 4 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Four.png");
    else if (Player_cards.hand[N].card == 5 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Five.png");
    else if (Player_cards.hand[N].card == 6 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Six.png");
    else if (Player_cards.hand[N].card == 7 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Seven.png");
    else if (Player_cards.hand[N].card == 8 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Eight.png");
    else if (Player_cards.hand[N].card == 9 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Nine.png");
    else if (Player_cards.hand[N].card == 10 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Ten.png");
    else if (Player_cards.hand[N].card == 11 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Jack.png");
    else if (Player_cards.hand[N].card == 12 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_Queen.png");
    else if (Player_cards.hand[N].card == 13 && Player_cards.hand[N].color == "Spades")
        gtk_image_set_from_file(picture, "Spades_King.png");
    
    else if (Player_cards.hand[N].card == 1 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Ace.png");
    else if (Player_cards.hand[N].card == 2 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Two.png");
    else if (Player_cards.hand[N].card == 3 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Three.png");
    else if (Player_cards.hand[N].card == 4 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Four.png");
    else if (Player_cards.hand[N].card == 5 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Five.png");
    else if (Player_cards.hand[N].card == 6 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Six.png");
    else if (Player_cards.hand[N].card == 7 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Seven.png");
    else if (Player_cards.hand[N].card == 8 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Eight.png");
    else if (Player_cards.hand[N].card == 9 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Nine.png");
    else if (Player_cards.hand[N].card == 10 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Ten.png");
    else if (Player_cards.hand[N].card == 11 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Jack.png");
    else if (Player_cards.hand[N].card == 12 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_Queen.png");
    else if (Player_cards.hand[N].card == 13 && Player_cards.hand[N].color == "Hearts")
        gtk_image_set_from_file(picture, "Hearts_King.png");
}*/


int main (int argc, char** argv)
{
    GtkWidget *window;
    GtkWidget *messageWindow; //Displays all events that happen.
    GtkWidget *potLabel; //Displays the current pot.
    GtkWidget *playerLabel; //Displays if it's the player's turn or is waiting.
    GtkWidget *picture1; //Displays the player's hand.
    GtkWidget *picture2;
    GtkWidget *picture3;
    GtkWidget *picture4;
    GtkWidget *picture5;
    GtkWidget *checkButton; //Player makes a CHECK event.
    GtkWidget *betButton; //Player makes a BET event.
    GtkWidget *callButton; //Player makes a CALL event.
    GtkWidget *raiseButton; //Player makes a RAISE event.
    GtkWidget *foldButton; //Player makes a FOLD event and leaves the game and server.
    GtkWidget *curAmtLabel; //Displays the player's current amount.
    GtkWidget *minLabel; //Displays the current minimum betting amount.
    GtkWidget *contrLabel; //Displays the player's contributions to the pot.
    GtkWidget *remAmtLabel; //Displays the remaining contributions for the player to make to stay in the game.
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "BETTING");
    g_signal_connect (window, "DESTROY", G_CALLBACK (destroy), NULL);
    gtk_container_set_border_width( GTK_CONTAINER (window), 30);
    
    messageWindow = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(window), messageWindow);
    
    potLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(potLabel), "POT: " /*+ pot*/);
    gtk_container_add(GTK_CONTAINER(window), potLabel);
    
    playerLabel = gtk_label_new(NULL);
    /*if (playerTurn)
        gtk_label_set_text(playerLabel, playerName + "'s turn");
    else*/
        gtk_label_set_text(GTK_LABEL(playerLabel), /*playerName + */" waiting...");
    gtk_container_add(GTK_CONTAINER(window), playerLabel);
    
    picture1 = gtk_image_new_from_file("Card_Back.jpg");
    //setCard(picture1, hand, 0);
    gtk_container_add(GTK_CONTAINER(window), picture1);
    picture2 = gtk_image_new_from_file("Card_Back.jpg");
    //setCard(picture1, hand, 1);
    gtk_container_add(GTK_CONTAINER(window), picture2);
    picture3 = gtk_image_new_from_file("Card_Back.jpg");
    //setCard(picture1, hand, 2);
    gtk_container_add(GTK_CONTAINER(window), picture3);
    picture4 = gtk_image_new_from_file("Card_Back.jpg");
    //setCard(picture1, hand, 3);
    gtk_container_add(GTK_CONTAINER(window), picture4);
    picture5 = gtk_image_new_from_file("Card_Back.jpg");
    //setCard(picture1, hand, 4);
    gtk_container_add(GTK_CONTAINER(window), picture5);
    
    checkButton = gtk_button_new_with_label("CHECK");
    g_signal_connect(G_OBJECT(checkButton), "button_press_event", G_CALLBACK(checkBtn), (gpointer) window);
    /*if(gtk_widget_get_sensitive(betButton) == false) //If BET is false, CHECK is also false
        gtk_widget_set_sensitive(checkButton, false);*/
    gtk_container_add(GTK_CONTAINER(window), checkButton);
    betButton = gtk_button_new_with_label("BET");
    g_signal_connect(G_OBJECT(betButton), "button_press_event", G_CALLBACK(betBtn), (gpointer) window);
    gtk_container_add(GTK_CONTAINER(window), betButton);
    callButton = gtk_button_new_with_label("CALL");
    g_signal_connect(G_OBJECT(callButton), "button_press_event", G_CALLBACK(callBtn), (gpointer) window);
    /*if(gtk_widget_get_sensitive(betButton) == false) //If BET is false, CALL is now true
        gtk_widget_set_sensitive(callButton), true);
    else*/
        gtk_widget_set_sensitive(callButton, false);
    gtk_container_add(GTK_CONTAINER(window), callButton);
    raiseButton = gtk_button_new_with_label("RAISE");
    g_signal_connect(G_OBJECT(raiseButton), "button_press_event", G_CALLBACK(raiseBtn), (gpointer) window);
    /*if(gtk_widget_get_sensitive(betButton) == false) //If BET is false, RAISE is now true
        gtk_widget_set_sensitive(raiseButton, false);
    else*/
        gtk_container_add(GTK_CONTAINER(window), raiseButton);
    foldButton = gtk_button_new_with_label("FOLD");
    g_signal_connect(G_OBJECT(foldButton), "button_press_event", G_CALLBACK(destroy), (gpointer) window);
    gtk_container_add(GTK_CONTAINER(window), foldButton);
    
    curAmtLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(curAmtLabel), "Current AmounT: " /*+ player's current amount*/);
    gtk_container_add(GTK_CONTAINER(window), curAmtLabel);
    minLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(minLabel), "MIN: " /*+ betting round's minimum betting amount*/);
    gtk_container_add(GTK_CONTAINER(window), minLabel);
    contrLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(contrLabel), "Contributions: " /*+ player's contributions*/);
    gtk_container_add(GTK_CONTAINER(window), contrLabel);
    remAmtLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(remAmtLabel), "Remaining Amount: " /*+ player's contributions - betting round's minimum*/);
    gtk_container_add(GTK_CONTAINER(window), remAmtLabel);
    
    gtk_widget_show_all(window);
    gtk_main();
}
