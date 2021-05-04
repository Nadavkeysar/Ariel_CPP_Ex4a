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
    class GeneSplicer : public Player
    {
        const string role="GeneSplicer";
        public:
            GeneSplicer(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~GeneSplicer() {};

            GeneSplicer& discover_cure(pandemic::Color color);
    };
};