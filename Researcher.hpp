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
    class Researcher : public Player
    {
        const string role = "Researcher";

        public:
            Researcher(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~Researcher() {};

            Researcher& discover_cure(pandemic::Color color);
    };
};