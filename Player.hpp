#pragma once
#include <iostream>
#include <vector>
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
using namespace std;
using namespace pandemic;

namespace pandemic{
    class Player{

        Board board;
        City cityNow;
        vector<pandemic::City> cards;

        public:
            Player(pandemic::Board b, pandemic::City c): board(b), cityNow(c) {};
            ~Player(){};
            virtual Player& drive(pandemic::City city);
            virtual Player& fly_direct(pandemic::City city);
            virtual Player& fly_charter(pandemic::City city);
            virtual Player& fly_shuttle(pandemic::City city);
            virtual Player& build();
            virtual Player& discover_cure(pandemic::Color color);
            virtual Player& treat(pandemic::City city);
            virtual Player& take_card(pandemic::City city);
            string role();
    };
};