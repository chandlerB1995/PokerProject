#Sumiran Chandler Mohit


#Chandler added for BOOST testing (src/test_dealer, src/test-MAP, src/test-player)
all: asio-1.12.2 chat_server Dealer Player src/interface Player_cards Make_a_play src/test-dealer src/test-MAP src/test-player

asio-1.12.2:
	tar xzf asio-1.12.2.tar.gz

GTKLINKFLAGS=$(shell pkg-config --libs gtk+-2.0)
GTKCOMPILEFLAGS=$(shell pkg-config --cflags gtk+-2.0)

CXXFLAGS+= -DASIO_STANDALONE -Wall -O0 -g -std=c++11
CPPFLAGS+=-I./include -I./asio-1.12.2/include -I./src ${GTKCOMPILEFLAGS}
LDLIBS+= -lpthread ${GTKLINKFLAGS}

chat_server: src/Dealer.o src/Player.o src/Player_cards.o src/Make_a_play.o
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDLIBS) src/chat_server.cpp src/Dealer.o src/Player.o src/Player_cards.o src/Make_a_play.o -o chat_server

#chat_client: temporarily disabled in place of interface
#	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/chat_client.cpp $(LDLIBS) -c -o chat_client

Dealer: src/Dealer.cpp  Player Player_cards
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/Dealer.cpp -c -o src/Dealer.o

Player: src/Player.cpp Player_cards
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/Player.cpp -c -o src/Player.o

#Lobby: src/Lobby.cpp  
#	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/Lobby.cpp -c -o src/Lobby.o

Player_cards: src/Player_cards.cpp  
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/Player_cards.cpp -c -o src/Player_cards.o

Make_a_play: src/Make_a_play.cpp 
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) src/Make_a_play.cpp -c -o src/Make_a_play.o

src/test-dealer: src/BOOST_dealer.cpp src/Dealer.cpp #Chandler added/copied from GitHub Makefile Lines23-24
        ${CXX} -o $@ $^ -Wall -std=c++11

src/test-MAP: src/BOOST_make_a_play.cpp src/Player.cpp src/Make_a_play.cpp #Chandler added/copied from GitHub Makefile Lines23-24
        ${CXX} -o $@ $^ -Wall -std=c++11

src/test-player: src/BOOST_player.cpp src/Dealer.cpp src/Player.cpp src/Player_cards.cpp #Chandler added/copied from GitHub Makefile Lines23-24
        ${CXX} -o $@ $^ -Wall -std=c++11

test: #Chandler added for BOOST testing
        ./src/test-dealer
        ./src/test-MAP
        ./src/test-player
	
clean:
	-rm -rf asio-1.12.2
	-rm -f chat_client
	-rm -f chat_server
	-rm -f src/chat_client.o
	-rm -f src/json
	-rm -f src/Dealer.o
	-rm -f src/Player.o
	-rm -f src/Player_cards.o
	-rm -f src/Make_a_play.o
	-rm -f src/test-dealer #Chandler added for BOOST testing
	-rm -f src/test-MAP #Chandler added for BOOST testing
	-rm -f src/test-player #Chandler added for BOOST testing
