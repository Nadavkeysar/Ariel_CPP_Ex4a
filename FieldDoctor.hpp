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
    class FieldDoctor : public Player
    {
        const string role ="FieldDoctor";
        public:
            FieldDoctor(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~FieldDoctor() {};

            FieldDoctor& treat(pandemic::City city);
    };
};