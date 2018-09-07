#include <iostream>
#include <cstdlib>
#include <ctime>

void shuffle_deck( int nums[], const int size) {
    int i, j;
    int t;
    for(i=0; i < size; i++) {
        j = std::rand() % size;
        t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}

void display_deck( int nums[], const int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    
    std::cout << std::endl;
}
//an array is always passed by reference


int main() {
    std::srand(std::time(0));
    const int DECK_SIZE = 52;
    int cards[ DECK_SIZE ];
    int i;
    for (i = 0; i < 52; i++) {
        cards[i] = i;
    }

    shuffle_deck(cards, DECK_SIZE);
    display_deck(cards, DECK_SIZE);
    return 0;
}