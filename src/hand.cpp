#include <iostream>

#include "hand.h"

using namespace std;

void Hand::Fill(Deck& deck, int max_size)
{
    while (size_ < max_size)
        hand_[size_++] = deck.Draw();
}

void Hand::Discard(int id)
{
    hand_[id] = hand_[size_-1];
    size_--;
}

void Hand::Print()
{
    cout << "hand: ";
    for (int i=0; i < size_; i++)
        cout << hand_[i].id() << " ";
    cout << flush;
}
