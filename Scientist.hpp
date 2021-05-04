#pragma once
#include <iostream>
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
using namespace pandemic;
using namespace std;

namespace pandemic
{
    class Scientist : public Player
    {
        const string role="Scientist";
        public:
            Scientist(pandemic::Board b, pandemic::City c, int cards): Player(b, c) {};
            ~Scientist() {};

            Scientist& discover_cure(pandemic::Color color);
    };
};