shuffle_deck: deck_array.o
	g++ -o shuffle_deck deck_array.o

deck_array.o: deck_array.cpp
	g++ -c deck_array.cpp