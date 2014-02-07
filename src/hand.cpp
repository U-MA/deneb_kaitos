#include "hand.h"

void Hand::Fill(Deck& deck, int max_size)
{
    while (size_ < max_size)
        hand_[size_++] = deck.Draw();
}

void Hand::Discard(int id)
{
}

void Hand::Print()
{
}
