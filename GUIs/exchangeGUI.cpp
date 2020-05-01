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

/* All selected cards are exchanged. This also makes sure that the same
 number of cards selected equals the number in the text box.*/
//NOTE: This function will only work if it's the player's turn. Otherwise, it does nothing.
static void exchangeCards (GtkWidget *button)
{
    
    
    destroy(button);
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
    GtkWidget *playerText; //Displays the player's name.
    GtkWidget *setText; //"Cards to Exchange: "
    GtkWidget *cardTextBox; //"The text box where the player puts the max number of cards to exchange with the dealer (MAX of 3).
    GtkWidget *exchangeButton; //The button to exchange all the cards selected. Checks to make sure cardTextBox matches the number of checkButtons pressed.
    GtkWidget *picture1; //Displays the player's current hand.
    GtkWidget *picture2;
    GtkWidget *picture3;
    GtkWidget *picture4;
    GtkWidget *picture5;
    GtkWidget *checkButton1; //The check button if the player wants to exchange the corresponding card.
    GtkWidget *checkButton2;
    GtkWidget *checkButton3;
    GtkWidget *checkButton4;
    GtkWidget *checkButton5;
    GtkWidget *messageWindow; //Displays all the events that are happening.
    gtk_init (&argc, &argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "Card Exchange");
    g_signal_connect (window, "DESTROY", G_CALLBACK (destroy), NULL);
    gtk_container_set_border_width( GTK_CONTAINER (window), 30);
    
    messageWindow = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(window), messageWindow);
    
    playerText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(playerText), /*playerName*/ "P1");
    gtk_container_add(GTK_CONTAINER(window), playerText);
    
    setText = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(setText), "Cards to Exchange:");
    gtk_container_add(GTK_CONTAINER(window), setText);
    
    cardTextBox = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(cardTextBox), "3");
    gtk_container_add(GTK_CONTAINER(window), cardTextBox);
    
    //take a player's hand to reassign pictures to match their cards
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
    
    checkButton1 = gtk_check_button_new();
    gtk_container_add(GTK_CONTAINER(window), checkButton1);
    checkButton2 = gtk_check_button_new();
    gtk_container_add(GTK_CONTAINER(window), checkButton2);
    checkButton3 = gtk_check_button_new();
    gtk_container_add(GTK_CONTAINER(window), checkButton3);
    checkButton4 = gtk_check_button_new();
    gtk_container_add(GTK_CONTAINER(window), checkButton4);
    checkButton5 = gtk_check_button_new();
    gtk_container_add(GTK_CONTAINER(window), checkButton5);
    
    exchangeButton = gtk_button_new_with_label("EXCHANGE CARDS");
    g_signal_connect(G_OBJECT(exchangeButton), "button_press_event", G_CALLBACK(exchangeCards), (gpointer) window);
    gtk_container_add(GTK_CONTAINER(window), exchangeButton);
    
    gtk_widget_show_all(window);
    gtk_main();
}
