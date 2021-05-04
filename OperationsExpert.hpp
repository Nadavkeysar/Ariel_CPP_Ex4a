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
    class OperationsExpert : public Player
    {
        const string role="OperationsExpert";
        public:
            OperationsExpert(pandemic::Board b, pandemic::City c): Player(b, c) {};
            ~OperationsExpert() {};

            OperationsExpert& build();
    };
};