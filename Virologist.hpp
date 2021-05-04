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
    class Virologist : public Player
    {
        const string role= "Virologist";
        public:
            Virologist(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~Virologist() {};

            Virologist& treat(pandemic::City city);
    };
};