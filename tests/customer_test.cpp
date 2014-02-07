#include "CppUTest/TestHarness.h"

#include <iostream>

#include "deck.h"
#include "hand.h"

using namespace std;

TEST_GROUP(CustomerTest)
{
};

TEST(CustomerTest, FirstCustomerTest)
{

    /* デッキの構築
     * 初めなのでデッキの枚数,中身は固定 */
    Deck deck;

    /* 手札の作成
     * 最初なので手札の枚数は固定(5枚) */
    Hand hand;

    /* 手札を埋める */
    hand.Fill(deck, 5);

    /* 手札を標準出力へ出力 */
    hand.Print();

    /* 選択されたマグナスを捨てる */
    int id = -1;
    cout << "select: " << flush;
    cin >> id;
    hand.Discard(id);

    /* 捨てられたことを確認するための出力 */
    hand.Print();
}
