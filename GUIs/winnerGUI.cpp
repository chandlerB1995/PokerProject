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
    GtkWidget *winnerText; //Announces the winner of the poker game.
    GtkWidget *potText; //Displays the pot won by the winner.
    GtkWidget *handText; //Displays the type of hand won.
    GtkWidget *picture1; //Displays the winner's hand.
    GtkWidget *picture2;
    GtkWidget *picture3;
    GtkWidget *picture4;
    GtkWidget *picture5;
    GtkWidget *player2Text; //Displays the other players' names and best hand types.
    GtkWidget *player2HandText;
    GtkWidget *player3Text;
    GtkWidget *player3HandText;
    GtkWidget *player4Text;
    GtkWidget *player4HandText;
    GtkWidget *player5Text;
    GtkWidget *player5HandText;
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "WINNER");
    g_signal_connect (window, "DESTROY", G_CALLBACK (destroy), NULL);
    gtk_container_set_border_width( GTK_CONTAINER (window), 30);
    
    winnerText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(winnerText), /*winnerName +*/ " is the winner!!");
    gtk_container_add(GTK_CONTAINER(window), winnerText);
    
    potText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(potText), "POT: " /*+ pot*/);
    gtk_container_add(GTK_CONTAINER(window), potText);
    
    handText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(winnerText), /*winnerHand +*/ " Hand!!");
    gtk_container_add(GTK_CONTAINER(window), handText);
    
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
    
    player2Text = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player2Text), "player2"/*player2Name*/);
    gtk_container_add(GTK_CONTAINER(window), player2Text);
    player2HandText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player2HandText), /*player2Hand +*/ " Hand");
    gtk_container_add(GTK_CONTAINER(window), player2HandText);
    
    player3Text = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player3Text), "player3"/*player3Name*/);
    gtk_container_add(GTK_CONTAINER(window), player3Text);
    player3HandText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player3HandText), /*player3Hand +*/ " Hand");
    gtk_container_add(GTK_CONTAINER(window), player3HandText);
    
    player4Text = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player4Text), "player4"/*player4Name*/);
    gtk_container_add(GTK_CONTAINER(window), player4Text);
    player4HandText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player4HandText), /*player4Hand +*/ " Hand");
    gtk_container_add(GTK_CONTAINER(window), player4HandText);
    
    player5Text = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player5Text), "player5"/*player5Name*/);
    gtk_container_add(GTK_CONTAINER(window), player5Text);
    player5HandText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(player5HandText), /*player5Hand +*/ " Hand");
    gtk_container_add(GTK_CONTAINER(window), player5HandText);
    
    gtk_widget_show_all(window);
    gtk_main();
}
