#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>



struct Card {
    int number;
    char colour;
};

std::vector<Card> allCards;
std::vector<Card> p1Cards;
std::vector<Card> p2Cards;


//Initialise variables
void Init() {
    char colours[3] = {'R','B','Y'};
    for (char colour: colours) {
        for (int j = 1; j <=10; j++) {
            Card tempCard = {j, colour};
            allCards.push_back(tempCard);
        } 
    }

    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(allCards), std::end(allCards), rng);
    
}

int main() {
    Init();
    
}