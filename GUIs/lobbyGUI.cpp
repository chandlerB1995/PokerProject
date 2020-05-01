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

void ante(GtkWidget *widg)
{
    //Player gives up 1, and is accepted to the next game. CHECK if Player has 3+ chips.
    std::cout << "You pushed the ante button" << std::endl;
    gtk_widget_set_sensitive(widg, false);
}

void startGame(GtkWidget *widg)
{
    //If there are 2-4 players in the next game, one player can click this button to start the game early.
    //Destroy this GUI and start the Betting GUI.
    std::cout << "You pushed the startGame button" << std::endl;
    gtk_main_quit();
}


int main (int argc, char** argv)
{
    GtkWidget *window;
    GtkWidget *entryLabel; //Displays that the current player has entered the server.
    GtkWidget *chipLabel; //Displays the current amount of chips the player has.
    GtkWidget *anteLabel; //Displays the ante amount to play the next game (always $1).
    GtkWidget *serverLabel; //"On the Server"
    GtkWidget *player1; //Displays all the players that are on the server (blank if non-existent).
    GtkWidget *player2;
    GtkWidget *player3;
    GtkWidget *player4;
    GtkWidget *player5;
    GtkWidget *leaveButton; //The button to leave the lobby and the server.
    GtkWidget *anteButton; //The button to ante in order to play the next game.
    GtkWidget *startGameButton; //The button to start the game early. Only available if 2-4 players have already anted.

    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "LOBBY");
    g_signal_connect (window, "DESTROY", G_CALLBACK (destroy), NULL);
    gtk_container_set_border_width( GTK_CONTAINER (window), 30);
    
    entryLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(entryLabel), /*playerName +*/ " has enter Poker King Server.");
    gtk_container_add(GTK_CONTAINER(window), entryLabel);
    
    chipLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(chipLabel), "Current Amount: " /*+ playerChips*/);
    gtk_container_add(GTK_CONTAINER(window), chipLabel);
    
    anteLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(anteLabel), "ANTE Amount: $1");
    gtk_container_add(GTK_CONTAINER(window), anteLabel);
    
    serverLabel = gtk_label_new(NULL);
    gtk_label_set_text(GTK_LABEL(serverLabel), "On the Server:");
    gtk_container_add(GTK_CONTAINER(window), serverLabel);
    
    player1 = gtk_label_new(NULL); //Shows up under serverLabel if there's a player 1.
    /*if (player1 exists)*/
        gtk_label_set_text(GTK_LABEL(player1), /*player1Name*/ "P1");
    gtk_container_add(GTK_CONTAINER(window), player1);
    player2 = gtk_label_new(NULL); //Shows up under serverLabel if there's a player 2.
    /*if (player2 exists)*/
        gtk_label_set_text(GTK_LABEL(player2), /*player2Name*/ "P2");
    gtk_container_add(GTK_CONTAINER(window), player2);
    player3 = gtk_label_new(NULL); //Shows up under serverLabel if there's a player 3.
    /*if (player3 exists)*/
        gtk_label_set_text(GTK_LABEL(player3), /*player3Name*/ "P3");
    gtk_container_add(GTK_CONTAINER(window), player3);
    player4 = gtk_label_new(NULL); //Shows up under serverLabel if there's a player 4.
    /*if (player4 exists)*/
        gtk_label_set_text(GTK_LABEL(player4), /*player4Name*/ "P4");
    gtk_container_add(GTK_CONTAINER(window), player4);
    player5 = gtk_label_new(NULL); //Shows up under serverLabel if there's a player 5.
    /*if (player5 exists)*/
        gtk_label_set_text(GTK_LABEL(player5), /*player5Name*/ "P5");
    gtk_container_add(GTK_CONTAINER(window), player5);
    
    leaveButton = gtk_button_new_with_label("LEAVE");
    g_signal_connect(G_OBJECT(leaveButton), "button_press_event", G_CALLBACK(destroy), (gpointer) window);
    gtk_container_add(GTK_CONTAINER(window), leaveButton);
    
    anteButton = gtk_button_new_with_label("ANTE");
    g_signal_connect(G_OBJECT(anteButton), "button_press_event", G_CALLBACK(ante), (gpointer) window);
    gtk_container_add(GTK_CONTAINER(window), anteButton);
    
    startGameButton = gtk_button_new_with_label("START GAME NOW!");
    g_signal_connect(G_OBJECT(startGameButton), "button_press_event", G_CALLBACK(startGame), (gpointer) window);
    gtk_widget_set_sensitive(startGameButton, false);
    /*if(2+ players push ante)
        gtk_widget_set_sensitive(startGameButton, true);*/
    gtk_container_add(GTK_CONTAINER(window), startGameButton);
    
    gtk_widget_show_all(window);
    gtk_main();
}
