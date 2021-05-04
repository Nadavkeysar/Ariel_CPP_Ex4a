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
    class Dispatcher : public Player
    {
        const string role = "Dispatcher";
        public:
            Dispatcher(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~Dispatcher() {};

            Dispatcher& fly_direct(pandemic::City city);
    };
};