#ifndef DENEB_KAITOS_HAND_H
#define DENEB_KAITOS_HAND_H

#include "deck.h"

class Hand
{
public:
    Hand() {}

    void Fill(Deck& deck, int max_size);
    void Discard(int id);
    void Print();

private:
    int size_;
    Magnus hand_[5];
};

#endif /* DENEB_KAITOS_HAND_H */
