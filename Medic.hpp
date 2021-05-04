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
    class Medic : public Player
    {
        const string role = "Medic";

    public:
        Medic(pandemic::Board b, pandemic::City c) : Player(b, c){};
        ~Medic(){};

        Medic &treat(pandemic::City city);
        Medic &drive(pandemic::City city);
        Medic &fly_direct(pandemic::City city);
        Medic &fly_charter(pandemic::City city);
        Medic &fly_shuttle(pandemic::City city);
    };
};